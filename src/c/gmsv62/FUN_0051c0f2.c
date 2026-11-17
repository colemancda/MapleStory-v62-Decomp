/* FUN_0051c0f2 - 0x0051c0f2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0051c0f2(int *param_1)

{
  int iVar1;
  UINT UVar2;
  UINT uCode;
  undefined4 uVar3;
  
  if (DAT_00978360 != 0) {
    uCode = 0;
    do {
      if (((*(byte *)(param_1 + 1) < 9) && (*(byte *)(param_1 + 1) == 4)) && (DAT_00978360 != 0)) {
        iVar1 = *(int *)((int)param_1 + 5);
        if (iVar1 == 0) {
          UVar2 = MapVirtualKeyA(uCode,1);
          uVar3 = 0;
        }
        else if (iVar1 == 1) {
          UVar2 = MapVirtualKeyA(uCode,1);
          uVar3 = 1;
        }
        else if (iVar1 == 2) {
          UVar2 = MapVirtualKeyA(uCode,1);
          uVar3 = 2;
        }
        else {
          if (iVar1 != 3) goto LAB_0051c167;
          UVar2 = MapVirtualKeyA(uCode,1);
          uVar3 = 3;
        }
        FUN_00748165(uVar3,UVar2);
      }
LAB_0051c167:
      uCode = uCode + 1;
      param_1 = (int *)((int)param_1 + 5);
    } while ((int)uCode < 0x59);
  }
  return;
}


