/* FUN_0076f93c - 0x0076f93c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076f93c(void)

{
  undefined4 uVar1;
  
  if (DAT_0097beec == 0) {
    FUN_007823df();
    uVar1 = 1;
  }
  else {
    FUN_00815de9();
    if (DAT_0097beec != 0) {
      (*(code *)**(undefined4 **)(DAT_0097beec + 8))(1);
    }
    uVar1 = 0;
  }
  FUN_0047cabb(uVar1);
  return;
}


