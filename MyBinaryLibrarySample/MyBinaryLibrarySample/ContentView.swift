//
//  ContentView.swift
//  MyBinaryLibrarySample
//
//  Created by Toru Furuya on 2025/08/07.
//

import SwiftUI
import MyBinaryLibrary

struct ContentView: View {
    let myLibrary = MyBinaryLibrary()

    var body: some View {
        VStack {
            Button("Hello!") {
                debugPrint(myLibrary.hello())
            }
            Button("Scan MyNumber Card") {
                Task {
                    do {
                        try await myLibrary.scanMyNumberCard(password: "abc123")
                    } catch {
                        debugPrint(error)
                    }
                }
            }
        }
        .padding()
    }
}

#Preview {
    ContentView()
}
