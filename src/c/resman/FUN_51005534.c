/* FUN_51005534 - 0x51005534 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 FUN_51005534(void)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *extraout_ECX;
  int unaff_EBP;
  
  FUN_51005950();
  uVar1 = *extraout_ECX;
  if ((uVar1 == 9) || (uVar1 == 0xd)) {
    if ((*(char *)(unaff_EBP + 8) != '\0') &&
       (piVar2 = *(int **)(extraout_ECX + 4), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    uVar3 = *(undefined4 *)(extraout_ECX + 4);
  }
  else {
    if ((uVar1 == 0x4009) || (uVar1 == 0x400d)) {
      if ((*(char *)(unaff_EBP + 8) != '\0') &&
         ((*(int **)(extraout_ECX + 4) != (int *)0x0 &&
          (piVar2 = (int *)**(int **)(extraout_ECX + 4), piVar2 != (int *)0x0)))) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      if (*(undefined4 **)(extraout_ECX + 4) != (undefined4 *)0x0) {
        uVar3 = **(undefined4 **)(extraout_ECX + 4);
        goto LAB_510055f5;
      }
    }
    else if (*(char *)(unaff_EBP + 0xc) != '\0') {
      Ordinal_8(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_51005424((void *)(unaff_EBP + -0x1c),0xd,extraout_ECX);
      if (*(char *)(unaff_EBP + 8) != '\0') {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 4))(*(int **)(unaff_EBP + -0x14));
      }
      uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_51002df5((short *)(unaff_EBP + -0x1c));
      if (iVar4 < 0) {
        FUN_5100581a(iVar4);
      }
      goto LAB_510055f5;
    }
    uVar3 = 0;
  }
LAB_510055f5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


