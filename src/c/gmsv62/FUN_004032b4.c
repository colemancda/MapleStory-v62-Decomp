/* FUN_004032b4 - 0x004032b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004032b4(void)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  short *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  sVar1 = *extraout_ECX;
  if ((sVar1 == 9) || (sVar1 == 0xd)) {
    if ((*(char *)(unaff_EBP + 8) != '\0') &&
       (piVar2 = *(int **)(extraout_ECX + 4), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    uVar3 = *(undefined4 *)(extraout_ECX + 4);
  }
  else {
    if ((sVar1 == 0x4009) || (sVar1 == 0x400d)) {
      if ((*(char *)(unaff_EBP + 8) != '\0') &&
         ((*(int **)(extraout_ECX + 4) != (int *)0x0 &&
          (piVar2 = (int *)**(int **)(extraout_ECX + 4), piVar2 != (int *)0x0)))) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      if (*(undefined4 **)(extraout_ECX + 4) != (undefined4 *)0x0) {
        uVar3 = **(undefined4 **)(extraout_ECX + 4);
        goto LAB_00403375;
      }
    }
    else if (*(char *)(unaff_EBP + 0xc) != '\0') {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00403271(0xd,extraout_ECX);
      if (*(char *)(unaff_EBP + 8) != '\0') {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 4))(*(int **)(unaff_EBP + -0x14));
      }
      uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x1c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      goto LAB_00403375;
    }
    uVar3 = 0;
  }
LAB_00403375:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


