#!/usr/local/bin/python3
AryI = list(map(int,input("Enter array:").split()))
print("Avg = " + str((sum(AryI)-max(AryI)-min(AryI))/(len(AryI) - 2.0)))
