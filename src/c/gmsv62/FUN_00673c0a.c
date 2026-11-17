/* FUN_00673c0a - 0x00673c0a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00673c0a(undefined4 *param_1)

{
  LONG *Target;
  int *piVar1;
  LONG LVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  Target = param_1 + 2;
  while( true ) {
    LVar2 = InterlockedExchange(Target,1);
    if (LVar2 == 0) break;
    (*DAT_0097b3ec)(100);
  }
  if ((code *)param_1[0x49] != (code *)0x0) {
    (*(code *)param_1[0x49])(0,param_1 + 3);
  }
  FUN_00402aba();
  uVar5 = 0x80000000;
  iVar3 = (*DAT_0097b44c)(param_1 + 3,0x40000000,0,0,(-(uint)(param_1[0x46] != 0) & 0xfffffffe) + 4,
                          0x80000000,0);
  param_1[0x45] = iVar3;
  if (iVar3 != -1) {
    if (param_1[0x46] == 0) {
      (*DAT_0097b460)(iVar3,0,0,2);
    }
    FUN_00673cfd(uVar5);
    (*DAT_0097b388)(param_1[0x45]);
  }
  param_1[0x45] = 0;
  if ((code *)param_1[0x49] != (code *)0x0) {
    (*(code *)param_1[0x49])(1,param_1 + 3);
  }
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *param_1 = 0;
  }
  *Target = 0;
  do {
    (*DAT_0097b3ec)(1000);
  } while (*Target != 0);
  uVar4 = 0;
  if ((code *)param_1[0x44] != (code *)0x0) {
    uVar4 = (*(code *)param_1[0x44])(uVar5);
  }
  if (param_1[0x47] != 0) {
    uVar4 = 1;
  }
  return uVar4;
}


