/* FUN_0081affb - 0x0081affb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081affb(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int extraout_ECX;
  uint uVar6;
  uint uVar7;
  int unaff_EBP;
  int *piVar8;
  int iVar9;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x80) != 0) {
    iVar3 = *(int *)(extraout_ECX + 0xbc);
    *(undefined4 *)(unaff_EBP + -0x28) = 0xffffffff;
    piVar8 = (int *)(extraout_ECX + 0xbc);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(int **)(unaff_EBP + -0x1c) = piVar8;
    if (((((iVar3 != 0) && (*(int *)(iVar3 + -4) != 0)) && (*(int *)(extraout_ECX + 0xb8) != 0)) &&
        ((*(int *)(*(int *)(extraout_ECX + 0xb8) + -4) != 0 && (*piVar8 != 0)))) &&
       (iVar3 = *(int *)(*piVar8 + -4), iVar3 != 0)) {
      *(int *)(unaff_EBP + -0x10) = *piVar8 + -4 + iVar3 * 4;
      do {
        cVar1 = *(char *)(*(int *)(extraout_ECX + 0xb8) + **(int **)(unaff_EBP + -0x10));
        if (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            iVar9 = 1;
          }
          else {
            if ((cVar1 == '\x02') || (cVar1 != '\x03')) goto LAB_0081b093;
            iVar9 = 2;
          }
          if (*(int *)(unaff_EBP + -0x14) < iVar9) {
            *(int *)(unaff_EBP + -0x14) = iVar9;
            *(int *)(unaff_EBP + -0x28) = iVar3 + -1;
          }
        }
LAB_0081b093:
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + -4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_008e96b8;
    iVar3 = *(int *)(extraout_ECX + 0xc0);
    uVar7 = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x20) = 0xffffffff;
    if ((iVar3 != 0) && (*(int *)(iVar3 + -4) != 0)) {
      iVar9 = *(int *)(iVar3 + 0x14);
      uVar2 = *(undefined4 *)(iVar3 + 0xc);
      uVar7 = *(uint *)(iVar3 + 0x10);
      *(int *)(unaff_EBP + -0x24) = iVar9;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
      uVar6 = iVar9 + uVar7;
      uVar4 = *(uint *)(iVar3 + 8);
      if ((int)uVar6 < (int)*(uint *)(iVar3 + 8)) {
        uVar4 = uVar6;
      }
      if (uVar7 < uVar4) {
        *(uint *)(unaff_EBP + -0x14) = iVar3 + 0x18 + uVar7 * 4;
        *(uint *)(unaff_EBP + -0x18) = uVar4 - uVar7;
        do {
          iVar9 = **(int **)(unaff_EBP + -0x14);
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          FUN_00414edd(iVar9 + iVar3,0xffffffff);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_004726be();
          FUN_00414f8b(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00414ebb();
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
          piVar8 = (int *)(unaff_EBP + -0x18);
          *piVar8 = *piVar8 + -1;
        } while (*piVar8 != 0);
      }
      piVar8 = *(int **)(unaff_EBP + -0x1c);
    }
    if ((*(int *)(extraout_ECX + 200) == 0) || (*(int *)(*(int *)(extraout_ECX + 200) + -4) == 0)) {
      puVar5 = &DAT_00978474;
    }
    else {
      puVar5 = *(undefined1 **)(extraout_ECX + 200);
    }
    (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x40))
              (puVar5,piVar8,*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(extraout_ECX + 0xcc)
               ,unaff_EBP + -0x3c,uVar7,*(undefined4 *)(unaff_EBP + -0x24),
               *(undefined4 *)(unaff_EBP + -0x20));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_008e96b8;
    FUN_00473048();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


