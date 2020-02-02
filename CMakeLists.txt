cmake_minimum_required(VERSION 3.15)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES
        001addTwoNumber/Node.cpp
        001addTwoNumber/Node.h
        001addTwoNumber/AddTownumber.cpp
        001addTwoNumber/AddTownumber.h
        aotu/test.cpp
        aotu/test.h
        002addTowNumberII/AddTowNumberII.cpp
        002addTowNumberII/AddTowNumberII.h
        002addTowNumberII/run.cpp
        003Solution/Solution.cpp
        003Solution/Solution.h
        003Solution/run.cpp
        004ReverseVowels/ReverseVowels.cpp
        004ReverseVowels/ReverseVowels.h
        004ReverseVowels/run.cpp
        005ValidPalindrome/ValidPalindrome.cpp 005ValidPalindrome/ValidPalindrome.h 005ValidPalindrome/run.cpp
        006Merge/Merge.cpp 006Merge/Merge.h 006Merge/run.cpp
        007Rotate/Rotate.cpp 007Rotate/Rotate.h
        008HasCycle/HasCycle.cpp 008HasCycle/HasCycle.h 008HasCycle/ListNode.cpp 008HasCycle/ListNode.h
        009FindLongestWord/FindLongestWord.cpp 009FindLongestWord/FindLongestWord.h
        010FindKthLargest/FindKthLargest.cpp 010FindKthLargest/FindKthLargest.h
        011TopKFrequent/TopKFrequent.cpp 011TopKFrequent/TopKFrequent.h
        012SortColors/SortColors.cpp 012SortColors/SortColors.h
        013FindContentChildren/FindContentChildren.cpp 013FindContentChildren/FindContentChildren.h
        014EraseOverlapIntervals/EraseOverlapIntervals.cpp 014EraseOverlapIntervals/EraseOverlapIntervals.h
        015FindMinArrowShots/FindMinArrowShots.cpp 015FindMinArrowShots/FindMinArrowShots.h
        016ReconstructQueue/ReconstructQueue.cpp 016ReconstructQueue/ReconstructQueue.h
        017MaxProfit/MaxProfit.cpp 017MaxProfit/MaxProfit.h 017MaxProfit/run.cpp
        018MaxProfitII/MaxProfitII.cpp 018MaxProfitII/MaxProfitII.h
        019IsSubsequence/IsSubsequence.cpp 019IsSubsequence/IsSubsequence.h
        017CheckPossibility/CheckPossibility.cpp 017CheckPossibility/CheckPossibility.h
        020MySprt/MySqrt.cpp 020MySprt/MySqrt.h
        021NextGreatestLetter/NextGreatestLetter.cpp 021NextGreatestLetter/NextGreatestLetter.h
        022SingleNonDuplicate/SingleNonDuplicate.cpp 022SingleNonDuplicate/SingleNonDuplicate.h


        )

add_executable(LeetCode main.cpp ${SOURCES_FILES} ${SOURCES} 023DiffWaysToCompute/DiffWaysToCompute.cpp 023DiffWaysToCompute/DiffWaysToCompute.h 024FindMin/FindMin.cpp 024FindMin/FindMin.h)

