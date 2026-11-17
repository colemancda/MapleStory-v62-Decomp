/* FUN_004baa07 - 0x004baa07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004baa07(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int *piVar7;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((uVar2 != param_2) || (*(int *)(param_1 + 4) == 0)) {
    piVar3 = *(int **)(param_1 + 4);
    *(uint *)(param_1 + 8) = param_2;
    FUN_004bbaf9(param_3);
    _Dst = (void *)FUN_004029b9(param_2 << 2);
    *(void **)(param_1 + 4) = _Dst;
    _memset(_Dst,0,param_2 << 2);
    piVar7 = piVar3;
    if (piVar3 != (int *)0x0) {
      while (piVar7 < piVar3 + uVar2) {
        iVar4 = *piVar7;
        piVar7 = piVar7 + 1;
        while (iVar4 != 0) {
          uVar6 = FUN_0087a024(*(undefined2 *)(iVar4 + 8),5);
          iVar5 = *(int *)(iVar4 + 4);
          piVar1 = (int *)((int)_Dst + (uVar6 % param_2) * 4);
          *(int *)(iVar4 + 4) = *piVar1;
          *piVar1 = iVar4;
          iVar4 = iVar5;
        }
      }
      FUN_00402b41(piVar3);
    }
  }
  return;
}


