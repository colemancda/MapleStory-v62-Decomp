/* thunk_FUN_0066b9de - 0x0066b9d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined * thunk_FUN_0066b9de(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar3 = 1;
  piVar4 = &DAT_0097aa1c;
  do {
    *piVar4 = ((iVar3 * iVar3) / 2 + 0xf) * iVar3;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 6);
  iVar3 = 6;
  piVar4 = &DAT_0097aa30;
  do {
    iVar1 = (iVar3 * iVar3) / 3;
    *piVar4 = (iVar1 + 0x13) * iVar1;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x33);
  puVar5 = &DAT_0097aae4;
  iVar3 = 0x95;
  do {
    uVar2 = __ftol();
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_0097ad38 = 0;
  return &DAT_0097aa18;
}


