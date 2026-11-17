/* FUN_0055c489 - 0x0055c489 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0055c489(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00559e8f();
  iVar6 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(iVar6 + 8);
  *(int *)(extraout_ECX + 8) = iVar1;
  *(undefined4 *)(extraout_ECX + 0xc) = *(undefined4 *)(iVar6 + 0xc);
  *(undefined4 *)(extraout_ECX + 0x10) = *(undefined4 *)(iVar6 + 0x10);
  *(undefined4 *)(extraout_ECX + 0x14) = *(undefined4 *)(iVar6 + 0x14);
  iVar7 = extraout_ECX;
  if (*(int *)(iVar6 + 4) != 0) {
    iVar1 = iVar1 << 2;
    *(int *)(unaff_EBP + 8) = iVar1;
    uVar2 = FUN_004029b9(iVar1);
    *(undefined4 *)(extraout_ECX + 4) = uVar2;
    piVar5 = *(int **)(iVar6 + 4);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
    piVar3 = (int *)(*(int *)(unaff_EBP + 8) + (int)piVar5);
    *(int **)(unaff_EBP + -0x14) = piVar3;
    if (piVar5 < piVar3) {
      do {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        iVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        while (iVar6 != 0) {
          puVar4 = (undefined4 *)FUN_0055cdb8();
          *(undefined4 **)(unaff_EBP + -0x1c) = puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = &PTR_LAB_008eba60;
            puVar4[1] = *(undefined4 *)(unaff_EBP + 8);
            puVar4[2] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            FUN_00414f8b(iVar6 + 8);
            puVar4[3] = 0;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            FUN_00414f8b(iVar6 + 0xc);
            *puVar4 = &PTR_FUN_008eba5c;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar6 = *(int *)(iVar6 + 4);
          *(undefined4 **)(unaff_EBP + 8) = puVar4;
        }
        puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
        piVar3 = *(int **)(unaff_EBP + -0x14);
        *puVar4 = *(undefined4 *)(unaff_EBP + 8);
      } while (piVar5 < piVar3);
      iVar7 = *(int *)(unaff_EBP + -0x18);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar7;
}


