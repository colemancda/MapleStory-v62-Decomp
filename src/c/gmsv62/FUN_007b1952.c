/* FUN_007b1952 - 0x007b1952 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007b1952(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  iVar1 = FUN_00413367(iVar1 + 0x630,*(undefined4 *)(iVar1 + 0x638));
  if (iVar1 == 1) {
    *param_2 = 0xffffffff;
    return;
  }
  puVar2 = param_2;
  if (iVar1 == 2) {
LAB_007b19a2:
    *puVar2 = 1;
  }
  else {
    if (iVar1 != 3) {
      puVar2 = param_3;
      if (iVar1 == 4) goto LAB_007b19a2;
      if (iVar1 == 6) {
        *param_2 = 0xffffffff;
      }
      else {
        if (iVar1 != 7) {
          return;
        }
        *param_2 = 1;
      }
    }
    FUN_007a442b(1);
  }
  return;
}


