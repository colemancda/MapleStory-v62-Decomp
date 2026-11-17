/* FUN_00679eac - 0x00679eac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00679eac(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_1[1] == 0) {
    uVar1 = (*DAT_0097b380)(0);
    uVar2 = (*DAT_0097b484)(uVar1,0x6cf4,10);
    uVar1 = (*DAT_0097b478)(uVar1,uVar2);
    puVar3 = (undefined4 *)(*DAT_0097b480)(uVar1);
    *param_1 = puVar3;
    param_1[1] = *puVar3;
  }
  return;
}


