/* FUN_0064cf49 - 0x0064cf49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_0064cf49(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if ((param_5 == 0) && (puVar1 = (undefined *)*param_1, puVar1 != (undefined *)0x21e3ce)) {
    if (puVar1 == (undefined *)0x2f514d) {
      if (param_3 == 0) {
        if (*param_4 == 0) {
          uVar3 = 1;
        }
      }
      else {
        iVar4 = FUN_006509a1(param_2);
        FUN_00413367(iVar4 + 0x13c,*(undefined4 *)(iVar4 + 0x144));
      }
    }
    else if (((puVar1 != (undefined *)0x30d7ed) && (puVar1 != (undefined *)0x312609)) &&
            (puVar1 != &DAT_004e23ea)) {
      return 0;
    }
  }
  iVar4 = 0xf;
  do {
    iVar2 = __ftol();
    *param_4 = iVar2;
    param_4 = param_4 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar3;
}


