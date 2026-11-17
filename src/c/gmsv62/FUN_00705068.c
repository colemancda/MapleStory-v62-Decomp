/* FUN_00705068 - 0x00705068 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00705068(void)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  int unaff_EBP;
  int iVar9;
  
  FUN_00879bb8();
  uVar6 = *(uint *)(unaff_EBP + 8);
  if (uVar6 == 1000) {
    FUN_00445a30();
    FUN_0047c683();
    if (DAT_0097bdbc != 0) {
      FUN_006fbe67();
    }
    FUN_00815de9();
    *(undefined4 *)(extraout_ECX + 0x5fc) = 0;
    FUN_00705297(0);
  }
  else {
    if (uVar6 == 2000) {
      *(undefined4 *)(extraout_ECX + 0x57c) = 1;
    }
    else {
      if (uVar6 != 0x7d1) {
        if (0x7d1 < uVar6) {
          if (uVar6 < 0x7d7) {
            iVar9 = uVar6 - 0x7d2;
            piVar1 = (int *)(extraout_ECX + 0x618);
            for (uVar6 = 0;
                ((*piVar1 != 0 && (uVar6 < *(uint *)(*piVar1 + -4))) &&
                (*(int *)(*piVar1 + uVar6 * 4) !=
                 *(int *)(*(int *)(extraout_ECX + 0x578) + iVar9 * 4))); uVar6 = uVar6 + 1) {
            }
            if ((*piVar1 == 0) || (*(uint *)(*piVar1 + -4) <= uVar6)) {
              iVar3 = *(int *)(extraout_ECX + 0x578);
              puVar7 = (undefined4 *)FUN_0045f1e3(0xffffffff);
              *puVar7 = *(undefined4 *)(iVar3 + iVar9 * 4);
            }
            *(undefined4 *)(unaff_EBP + 8) = 0;
            iVar3 = *(int *)(extraout_ECX + 0x578);
            uVar2 = *(undefined2 *)(iVar3 + iVar9 * 4);
            *(undefined4 *)(unaff_EBP + -4) = 0;
            puVar7 = (undefined4 *)
                     FUN_00704b95(unaff_EBP + -0x14,CONCAT22((short)((uint)iVar3 >> 0x10),uVar2));
            *(undefined1 *)(unaff_EBP + -4) = 1;
            puVar8 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xff9);
            uVar4 = *puVar7;
            uVar5 = *puVar8;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            FUN_00434e21(unaff_EBP + 8,uVar5,uVar4);
            *(undefined1 *)(unaff_EBP + -4) = 1;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00414ebb();
            FUN_00471102(unaff_EBP + 8,7);
            FUN_00703324(iVar9);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_00414ebb();
          }
          else if (uVar6 == 0x7d7) {
            uVar6 = (uint)(*(int *)(extraout_ECX + 0x61c) == 0);
            *(uint *)(extraout_ECX + 0x61c) = uVar6;
            (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5d8) + 4) + 0x1c))(uVar6);
            FUN_00705248(*(undefined4 *)(extraout_ECX + 0x61c));
          }
        }
        goto LAB_0070522b;
      }
      *(undefined4 *)(extraout_ECX + 0x57c) = 0;
    }
    FUN_00815de9();
    FUN_00705381();
  }
LAB_0070522b:
  FUN_00817f6e(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


