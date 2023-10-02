class Solution(object):
    def summaryRanges(self, nums):
        if not nums:
            return []

        result = []
        start = end = nums[0]

        for num in nums[1:]:
            if num == end + 1:
                end = num
            else:
                result.append("{}->{}".format(start, end) if start != end else str(start))
                start = end = num

        result.append("{}->{}".format(start, end) if start != end else str(start))

        return result
