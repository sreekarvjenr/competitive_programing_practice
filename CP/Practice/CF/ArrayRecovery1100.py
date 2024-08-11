for _ in range(int(input())):
	n = int(input())
	ans = [0]
	for x in map(int, input().split()):
		if x != 0 and ans[-1] - x >= 0:
			print(-1)
			break
		else:
			ans.append(ans[-1] + x)
	else:
		print(*ans[1:])