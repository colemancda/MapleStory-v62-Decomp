/* FUN_10004e10 - 0x10004e10 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


byte __cdecl FUN_10004e10(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar5 = param_1[3] - 5U;
  }
  do {
    uVar3 = param_1[0x1b];
    if (uVar3 < 2) {
      FUN_10004f70(param_1);
      uVar3 = param_1[0x1b];
      if (uVar3 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_10009370(param_1,puVar4,param_1[0x19] - iVar2,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_10004aa0(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return ((param_2 != 4) - 1U & 2) + 1;
        }
        return (param_2 != 4) - 1U & 2;
      }
    }
    piVar1 = param_1 + 0x19;
    *piVar1 = *piVar1 + uVar3;
    iVar2 = param_1[0x15];
    param_1[0x1b] = 0;
    uVar3 = iVar2 + uVar5;
    if ((*piVar1 == 0) || (uVar3 <= (uint)param_1[0x19])) {
      param_1[0x1b] = param_1[0x19] - uVar3;
      param_1[0x19] = uVar3;
      if (iVar2 < 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_10009370(param_1,puVar4,uVar3 - iVar2,0);
      param_1[0x15] = param_1[0x19];
      FUN_10004aa0(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar2 = param_1[0x15];
    if (param_1[9] - 0x106U <= (uint)(param_1[0x19] - iVar2)) {
      if (iVar2 < 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_10009370(param_1,puVar4,param_1[0x19] - iVar2,0);
      param_1[0x15] = param_1[0x19];
      FUN_10004aa0(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}


