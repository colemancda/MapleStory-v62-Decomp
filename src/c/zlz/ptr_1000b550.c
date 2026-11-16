/* ptr_1000b550 - 0x1000b550 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


int __thiscall ptr_1000b550(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (param_3 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = param_3;
  iVar9 = param_3;
LAB_1000b573:
  do {
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar7 = *(uint *)(param_1 + 0x54);
      if (*(int *)(param_1 + 0x4c) == 0) {
        if (uVar7 < 0x10000) {
          if (uVar7 != 0) goto LAB_1000b672;
          uVar3 = 0;
        }
        else {
          uVar7 = 0x10000;
LAB_1000b672:
          puVar2 = FUN_1000b870((int *)(param_1 + 0xc));
          if ((*(byte *)(param_1 + 8) & 0xf) != 0) {
            param_3 = 5;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&param_3,(ThrowInfo *)&DAT_1000eff8);
          }
          piVar1 = (int *)FUN_1000bf20(param_1);
          uVar3 = (**(code **)(*piVar1 + 4))(puVar2,uVar7);
        }
        *(undefined4 *)(param_1 + 0x14) = uVar3;
        puVar2 = FUN_1000b870((int *)(param_1 + 0xc));
        *(undefined4 **)(param_1 + 0x10) = puVar2;
        iVar6 = *(int *)(param_1 + 0x54);
        if (iVar6 == -1) goto LAB_1000b6b4;
        iVar8 = *(int *)(param_1 + 0x14);
      }
      else {
        if (uVar7 < 5) {
          param_2 = 0;
LAB_1000b5a3:
          if (param_2 != 0) goto LAB_1000b5af;
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        else {
          param_2 = uVar7 - 4;
          if (param_2 < 0x10000) goto LAB_1000b5a3;
          param_2 = 0x10000;
LAB_1000b5af:
          if ((*(byte *)(param_1 + 8) & 0xf) != 0) {
            param_3 = 5;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&param_3,(ThrowInfo *)&DAT_1000eff8);
          }
          piVar1 = (int *)FUN_1000bf20(param_1);
          (**(code **)(*piVar1 + 4))(&param_2,4);
          puVar2 = FUN_1000b870((int *)(param_1 + 0x50));
          if ((*(byte *)(param_1 + 8) & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&stack0xfffffff4,(ThrowInfo *)&DAT_1000eff8);
          }
          piVar1 = (int *)FUN_1000bf20(param_1);
          uVar3 = (**(code **)(*piVar1 + 4))(puVar2,param_1);
          *(undefined4 *)(param_1 + 0x14) = uVar3;
          puVar4 = FUN_1000b870((int *)(param_1 + 0x50));
          puVar5 = FUN_1000b870((int *)(param_1 + 0xc));
          FUN_100011c0(puVar5,puVar4,param_2,(undefined4 *)&DAT_10010040);
          iVar9 = param_3;
        }
        puVar2 = FUN_1000b870((int *)(param_1 + 0xc));
        *(undefined4 **)(param_1 + 0x10) = puVar2;
        if (*(int *)(param_1 + 0x54) == -1) goto LAB_1000b6b4;
        iVar8 = *(int *)(param_1 + 0x14);
        iVar6 = *(int *)(param_1 + 0x54) + (uint)(iVar8 != 0) * -4;
      }
      *(int *)(param_1 + 0x54) = iVar6 - iVar8;
    }
LAB_1000b6b4:
    uVar7 = FUN_100075b0((int *)(param_1 + 0x10),2);
    if (uVar7 != 0) {
      if ((uVar7 == 1) || (uVar7 == 0xfffffffb)) goto LAB_1000b738;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
      FUN_1000abe0(uVar7);
      goto LAB_1000b573;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
LAB_1000b738:
      iVar6 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = 0;
      return iVar9 - iVar6;
    }
  } while( true );
}


