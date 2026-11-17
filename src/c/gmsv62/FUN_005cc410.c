/* FUN_005cc410 - 0x005cc410 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte __thiscall FUN_005cc410(int param_1,int param_2,undefined4 param_3,byte param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  
  cVar3 = '\x01';
  if (*(int *)((-(uint)(*(int *)(param_1 + 0xec) != 0) & *(int *)(param_1 + 0xec) - 0xcU) + 0x240)
      == 0) {
LAB_005cc458:
    cVar3 = '\0';
  }
  else {
    if ((*(int *)(param_1 + 0x270) == 0) || (iVar1 = *(int *)(param_1 + 0x15c), iVar1 == 0)) {
      iVar1 = *(int *)(param_1 + 0x158);
    }
    if (*(int *)(iVar1 + 0x1d4) == 0) goto LAB_005cc458;
  }
  if ((*(int *)(param_1 + 0x270) == 0) || (iVar1 = *(int *)(param_1 + 0x15c), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 + 0x158);
  }
  iVar1 = FUN_00413367(iVar1 + 0x40,*(undefined4 *)(iVar1 + 0x48));
  if (iVar1 == 0) {
    if (param_2 != 0) {
      param_4 = param_2 < 0;
    }
LAB_005cc50c:
    bVar2 = param_4 & 1 | 4;
  }
  else {
    if (iVar1 == 1) {
LAB_005cc4db:
      if (param_2 == 0) goto LAB_005cc50c;
      cVar3 = (-cVar3 & 0xfU) + 1;
LAB_005cc4e8:
      bVar2 = cVar3 << 1;
      param_4 = param_2 < 0;
    }
    else {
      if (iVar1 == 2) {
        if (*(int *)(param_5 + 0x110) == 0) {
          if (param_2 != 0) {
            param_4 = param_2 < 0;
          }
          return param_4 & 1 | 6;
        }
        goto LAB_005cc4db;
      }
      if (iVar1 != 3) {
        return 0;
      }
      if (param_2 != 0) {
        cVar3 = (-cVar3 & 10U) + 6;
        goto LAB_005cc4e8;
      }
      bVar2 = ((-cVar3 & 10U) + 6) * '\x02';
    }
    bVar2 = bVar2 | param_4 & 1;
  }
  return bVar2;
}


