/* FUN_0087e553 - 0x0087e553 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0087e553(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    uVar2 = FUN_0087e484();
    return uVar2;
  }
  if ((DAT_00980770 != (code *)0x0) && (iVar3 = FUN_00885eeb(DAT_00980770), iVar3 != 0)) {
    uVar2 = (*DAT_00980770)(param_1);
    return uVar2;
  }
  return 0;
}


