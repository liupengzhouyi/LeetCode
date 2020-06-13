cmake_minimum_required(VERSION 3.15)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES
        befor202000605/001addTwoNumber/Node.cpp
        befor202000605/001addTwoNumber/Node.h
        befor202000605/001addTwoNumber/AddTownumber.cpp
        befor202000605/001addTwoNumber/AddTownumber.h
        aotu/test.cpp
        aotu/test.h
        befor202000605/002addTowNumberII/AddTowNumberII.cpp
        befor202000605/002addTowNumberII/AddTowNumberII.h
        befor202000605/002addTowNumberII/run.cpp
        befor202000605/003Solution/Solution.cpp
        befor202000605/003Solution/Solution.h
        befor202000605/003Solution/run.cpp
        befor202000605/004ReverseVowels/ReverseVowels.cpp
        befor202000605/004ReverseVowels/ReverseVowels.h
        befor202000605/004ReverseVowels/run.cpp
        befor202000605/005ValidPalindrome/ValidPalindrome.cpp befor202000605/005ValidPalindrome/ValidPalindrome.h befor202000605/005ValidPalindrome/run.cpp
        befor202000605/006Merge/Merge.cpp befor202000605/006Merge/Merge.h befor202000605/006Merge/run.cpp
        befor202000605/007Rotate/Rotate.cpp befor202000605/007Rotate/Rotate.h
        befor202000605/008HasCycle/HasCycle.cpp befor202000605/008HasCycle/HasCycle.h befor202000605/008HasCycle/ListNode.cpp befor202000605/008HasCycle/ListNode.h
        befor202000605/009FindLongestWord/FindLongestWord.cpp befor202000605/009FindLongestWord/FindLongestWord.h
        befor202000605/010FindKthLargest/FindKthLargest.cpp befor202000605/010FindKthLargest/FindKthLargest.h
        befor202000605/011TopKFrequent/TopKFrequent.cpp befor202000605/011TopKFrequent/TopKFrequent.h
        befor202000605/012SortColors/SortColors.cpp befor202000605/012SortColors/SortColors.h
        befor202000605/013FindContentChildren/FindContentChildren.cpp befor202000605/013FindContentChildren/FindContentChildren.h
        befor202000605/014EraseOverlapIntervals/EraseOverlapIntervals.cpp befor202000605/014EraseOverlapIntervals/EraseOverlapIntervals.h
        befor202000605/015FindMinArrowShots/FindMinArrowShots.cpp befor202000605/015FindMinArrowShots/FindMinArrowShots.h
        befor202000605/016ReconstructQueue/ReconstructQueue.cpp befor202000605/016ReconstructQueue/ReconstructQueue.h
        befor202000605/017MaxProfit/MaxProfit.cpp befor202000605/017MaxProfit/MaxProfit.h befor202000605/017MaxProfit/run.cpp
        befor202000605/018MaxProfitII/MaxProfitII.cpp befor202000605/018MaxProfitII/MaxProfitII.h
        befor202000605/019IsSubsequence/IsSubsequence.cpp befor202000605/019IsSubsequence/IsSubsequence.h
        befor202000605/017CheckPossibility/CheckPossibility.cpp befor202000605/017CheckPossibility/CheckPossibility.h
        befor202000605/020MySprt/MySqrt.cpp befor202000605/020MySprt/MySqrt.h
        befor202000605/021NextGreatestLetter/NextGreatestLetter.cpp befor202000605/021NextGreatestLetter/NextGreatestLetter.h
        befor202000605/022SingleNonDuplicate/SingleNonDuplicate.cpp befor202000605/022SingleNonDuplicate/SingleNonDuplicate.h


        )

add_executable(LeetCode main.cpp ${SOURCES_FILES} ${SOURCES} befor202000605/023DiffWaysToCompute/DiffWaysToCompute.cpp befor202000605/023DiffWaysToCompute/DiffWaysToCompute.h befor202000605/024FindMin/FindMin.cpp befor202000605/024FindMin/FindMin.h befor202000605/025ShortestPathBinaryMatrix/ShortestPathBinaryMatrix.cpp befor202000605/025ShortestPathBinaryMatrix/ShortestPathBinaryMatrix.h befor202000605/026MainElement/MainElement.cpp befor202000605/026MainElement/MainElement.h c20200506/Abacus/Abacus.cpp c20200506/Abacus/Abacus.h c20200506/ArrayNumbers/ArrayNumbers.cpp c20200506/ArrayNumbers/ArrayNumbers.h c20200506/DuplicateZeros/DuplicateZeros.cpp c20200506/DuplicateZeros/DuplicateZeros.h c20200506/Paly926/Paly926.cpp c20200506/Paly926/Paly926.h c20200506/Paly605/Paly605.cpp c20200506/Paly605/Paly605.h c20200506/Paly495/Paly495.cpp c20200506/Paly495/Paly495.h c20200607/Paly1422/Paly1422.cpp c20200607/Paly1422/Paly1422.h c20200607/Paly1423/Paly1423.cpp c20200607/Paly1423/Paly1423.h c20200607/Paly1424/Paly1424.cpp c20200607/Paly1424/Paly1424.h c20200607/Paly1425/Paly1425.cpp c20200607/Paly1425/Paly1425.h c20200610/Paly22/Paly22.cpp c20200610/Paly22/Paly22.h c20200610/Paly41/Paly41.cpp c20200610/Paly41/Paly41.h c20200612/Paly18/Paly18.cpp c20200612/Paly18/Paly18.h c20200612/Paly61/Paly61.cpp c20200612/Paly61/Paly61.h c20200612/Paly42/Paly42.cpp c20200612/Paly42/Paly42.h c20200613/Paly073.cpp c20200613/Paly073.h)

