/* FUN_00737178 - 0x00737178 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00737178(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 local_c [4];
  int local_8;
  
  iVar2 = FUN_00455c59(local_c);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  sVar1 = FUN_0045f084(iVar2 + 0x39,*(undefined4 *)(iVar2 + 0x3d));
  iVar2 = (int)sVar1 / 100;
  if (iVar2 == 0) {
    iVar2 = 6;
  }
  else if (iVar2 == 1) {
    iVar2 = 2;
  }
  else if (iVar2 == 2) {
    iVar2 = 0x12;
  }
  else {
    if (2 < iVar2) {
      if (iVar2 < 5) {
        iVar2 = 10;
        goto LAB_007371ed;
      }
      if (iVar2 == 5) {
        iVar2 = 0xe;
        goto LAB_007371ed;
      }
    }
    iVar2 = 0;
  }
LAB_007371ed:
  return 30000 < iVar2 + param_1;
}


