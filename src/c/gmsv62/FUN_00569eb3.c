/* FUN_00569eb3 - 0x00569eb3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00569eb3(void)

{
  char cVar1;
  
  if (DAT_00979440 != 0) {
    FUN_00815de9();
    if (DAT_00979440 != 0) {
      (*(code *)**(undefined4 **)(DAT_00979440 + 8))();
    }
  }
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    FUN_0045f0f3(s_Try_Again__0096572c,0xffffffff);
    FUN_007db3ad();
  }
  else {
    (**(code **)(*DAT_00979430 + 0x34))();
  }
  return;
}


