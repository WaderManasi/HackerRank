regex_pattern = r"\W+"	# W: all nonword characters.

#or we can use r"\D+" : Matches all non-digits
import re
print("\n".join(re.split(regex_pattern, input())))