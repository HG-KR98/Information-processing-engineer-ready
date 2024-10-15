# 문자열

lower() : 문자열을 소문자로 변환한다.
upper() : 문자열을 대문자로 변환한다.
split('기준문자'): 기준 문자로 문자열을 쪼개서 배열로 만듬
"기준문자".join : 기준 문자로 배열을 문자로 만듬
.replace('첫번째', '두번째') : 첫번째 문자를 두번째 문자로 바꿔서 반환해준다.
find(sub) : 부분 문자열 sub가 처음 나타나는 위치를 찾는다. sub가 존재하지 않는 경우 -1을 반환
index(sub) : 위와 같음. 문자가 존재하지 않는 경우 에러를 발생
capitalize() : 문자열의 첫 글자를 대문자로 변환한다.
casefold() : 문자열을 소문자로 변환한다.
count(sub, start=0, end=None) : 부분 문자열이 문자열에서 등장하는 횟수를 센다.
endswith(suffix, start=0, end=None) : 문자열이 지정된 접미사로 끝나는지 확인한다.
isdigit() : 문자열이 숫자로만 이루어져 있는지 확인한다.
Istrip(chars=None) : 문자열의 왼쪽 끝에서 지정된 문자를 제거한다.
partition(sep) : 문자열을 지정된 구분자를 기준으로 세 부분으로 나눈다.
swapcase() : 문자열의 대문자를 소문자로, 소문자를 대문자로 변환한다.
splitlines(keepends=False) : 줄바꿈을 기준으로 문자열을 분할하여 리스트로 변환한다.
startswith(prefix, start=0, end=None) : 문자열이 지정된 접두사로 시작하는지 확인한다.
title() : 문자열을 제목 형식으로 변환한다.
zfill(width) : 문자열 길이가 'width'에 도달할 때까지 왼쪽을 0으로 채운다.