#include "../gtest/gtest.h"
#include "../include/TText.h"

TEST(TText, can_create_text) {
	ASSERT_NO_THROW(TText);
}
TEST(TText, can_add_next_line) {
	TText tmp ;
	ASSERT_NO_THROW(tmp.addNextLine("NEWNEW"));
}
TEST(TText, can_add_next_section) {
	TText tmp;
	ASSERT_NO_THROW(tmp.addNextSection("newnew"));
}
TEST(TText, can_go_next) {
	TText tmp;
	ASSERT_NO_THROW(tmp.goNextLink());
}
TEST(TText, can_go_back) {
	TText tmp;
	ASSERT_NO_THROW(tmp.goPrevLink());
}
TEST(TText, can_go_down) {
	TText tmp;
	ASSERT_NO_THROW(tmp.goDownLink());
}

