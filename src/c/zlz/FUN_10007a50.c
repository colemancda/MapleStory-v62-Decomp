/* FUN_10007a50 - 0x10007a50 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 __cdecl FUN_10007a50(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  
  if ((param_1 == (undefined4 *)0x0) || (piVar1 = (int *)param_1[7], piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (*piVar1 != 0xd) {
    *piVar1 = 0xd;
    *(undefined4 *)(param_1[7] + 4) = 0;
  }
  iVar6 = param_1[1];
  if (iVar6 == 0) {
    return 0xfffffffb;
  }
  uVar4 = *(uint *)(param_1[7] + 4);
  pcVar5 = (char *)*param_1;
  do {
    if (3 < uVar4) break;
    if (*pcVar5 == (&DAT_1000d184)[uVar4]) {
      uVar4 = uVar4 + 1;
    }
    else if (*pcVar5 == '\0') {
      uVar4 = 4 - uVar4;
    }
    else {
      uVar4 = 0;
    }
    pcVar5 = pcVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  param_1[2] = pcVar5 + (param_1[2] - (int)*param_1);
  *param_1 = pcVar5;
  param_1[1] = iVar6;
  *(uint *)(param_1[7] + 4) = uVar4;
  if (uVar4 != 4) {
    return 0xfffffffd;
  }
  uVar2 = param_1[2];
  uVar3 = param_1[5];
  FUN_100073e0((int)param_1);
  param_1[2] = uVar2;
  param_1[5] = uVar3;
  *(undefined4 *)param_1[7] = 7;
  return 0;
}


