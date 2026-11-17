/* FUN_008345ae - 0x008345ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_008345ae(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  iVar4 = FUN_00455c59(local_10);
  uVar2 = *(undefined4 *)(iVar4 + 4);
  if (local_c != 0) {
    FUN_0045e7c2(0);
  }
  puVar3 = (undefined4 *)param_1[0x10];
  while (puVar3 != (undefined4 *)0x0) {
    iVar4 = *(int *)((-(uint)(puVar3 != (undefined4 *)0x0) & (uint)(puVar3 + -4)) + 4);
    iVar5 = FUN_00650dae(uVar2,*puVar3,0);
    piVar1 = puVar3 + 1;
    puVar3 = (undefined4 *)(-(uint)(iVar4 != 0) & iVar4 + 0x10U);
    if (iVar5 < *piVar1) {
      return 0;
    }
  }
  if (((*param_1 / 10000) % 100 != 0) && ((*param_1 / 10000) % 10 == 2)) {
    local_8 = 0;
    local_c = 0;
    FUN_004b8f25(param_1,&local_c);
    FUN_004b8f25(param_1,&local_8);
    if (local_8 <= local_c) {
      return -1;
    }
  }
  iVar4 = FUN_00650dae(uVar2,*param_1,&param_1);
  iVar5 = FUN_00650e14();
  return ((iVar5 <= iVar4) - 1 & 2) - 1;
}


