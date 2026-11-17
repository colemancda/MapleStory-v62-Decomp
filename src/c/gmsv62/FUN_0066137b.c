/* FUN_0066137b - 0x0066137b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0066137b(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar2 = FUN_004029b9(0x28);
      *(int *)(unaff_EBP + -0x14) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0066165a();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x958) = uVar3;
    }
    else if (0 < *(int *)(unaff_EBP + -0x10)) {
      if (*(int *)(unaff_EBP + -0x10) < 3) {
        iVar2 = FUN_004029b9(0x28);
        *(int *)(unaff_EBP + -0x14) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00661715();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0x958 + *(int *)(unaff_EBP + -0x10) * 4) = uVar3;
      }
      else if (*(int *)(unaff_EBP + -0x10) == 3) {
        iVar2 = FUN_004029b9(0x1c);
        *(int *)(unaff_EBP + -0x14) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00661602();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0x964) = uVar3;
      }
      else if (*(int *)(unaff_EBP + -0x10) == 4) {
        iVar2 = FUN_004029b9(0x2c);
        *(int *)(unaff_EBP + -0x14) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_006616ee();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0x968) = uVar3;
      }
      else if (*(int *)(unaff_EBP + -0x10) == 5) {
        puVar1 = (undefined4 *)FUN_004029b9(0x20);
        *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (puVar1 == (undefined4 *)0x0) {
          puVar1 = (undefined4 *)0x0;
        }
        else {
          FUN_00661602();
          puVar1[7] = 0;
          *puVar1 = &PTR_FUN_008ed524;
          puVar1[6] = &PTR_LAB_008ed508;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 **)(extraout_ECX + 0x96c) = puVar1;
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 6);
  FUN_006619ae();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


