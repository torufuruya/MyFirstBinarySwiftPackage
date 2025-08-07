//
//  MyBinaryLibrary.swift
//  MyBinaryLibrary
//
//  Created by Toru Furuya on 2025/08/07.
//

import Foundation
import VerifyJPKI

public class MuBinaryLibrary {
    public func hee() -> String {
        return "Hello, World!"
    }

    public func scanMyNumberCard(password: String) async throws {
        // JPKI APへの接続準備を行います。
        let session = ReaderSession(dispatchQueue: DispatchQueue.main)

        // Display message in case it takes some time to read card data.
        session.onEvent = { event in
            if(event == ReaderSessionEvent.connectionestablished) {
                session.dialogMessage = "読み取り中です"
            }
        }

        // JPKI APを初期化します。
        let ap = JPKIAP(session: session)

        // ここでは、これが署名対象です。
        let documentToBeSigned = "利用規約に同意します。"

        // JPKI APに対して署名を要求します。
        do {
            let result = try await ap.signDataWithDigitalSignatureSecretKey(
                password: password,
                data: documentToBeSigned.data(using: .utf8)!,
                hashAlgorithm: .sha256
            )
            print("MyLibrary Success: \(result)")
            session.close()
        } catch {
            print("MyLibrary Failure: \(error)")
            session.closeWithError(message: "")
            throw error
        }
    }
}
