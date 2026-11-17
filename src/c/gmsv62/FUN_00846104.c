/* FUN_00846104 - 0x00846104 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00846104(void)

{
  uint uVar1;
  undefined1 local_c [4];
  int local_8;
  
  FUN_00455c59(local_c);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
  }
  FUN_0042452b();
  uVar1 = FUN_0042452b();
  FUN_00465664((uVar1 & 0xff) + 1,0,&stack0x00000007);
  if (DAT_009791a4 != 0) {
    FUN_006c0e20();
  }
  return;
}


