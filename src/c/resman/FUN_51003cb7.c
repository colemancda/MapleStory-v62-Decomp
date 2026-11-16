/* FUN_51003cb7 - 0x51003cb7 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_51003cb7(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_51005950();
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar3 = FUN_51005675(piVar1);
    if (piVar3 == (int *)0x0) {
      if (*(undefined4 **)(unaff_EBP + 0x20) != (undefined4 *)0x0) {
        **(undefined4 **)(unaff_EBP + 0x20) = 0;
      }
      iVar4 = FUN_51005534();
      *(int *)(unaff_EBP + 0xc) = iVar4;
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      if (iVar4 != 0) {
        iVar4 = FUN_510049a8((void *)(unaff_EBP + 0x20),(int *)(unaff_EBP + 0xc));
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          FUN_5100581a(iVar4);
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + 0x20) == 0) {
LAB_51003d5c:
        FUN_51003dbd();
        return;
      }
      FUN_51004369((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0x20),piVar1);
      piVar1 = *(int **)(unaff_EBP + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    else {
      puVar2 = *(undefined4 **)(unaff_EBP + 0x20);
      if (puVar2 == (undefined4 *)0x0) goto LAB_51003ce8;
      if ((*(short *)(unaff_EBP + 0x10) != 0) && (*(short *)(unaff_EBP + 0x10) != 10))
      goto LAB_51003d5c;
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_51004369((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0x20),piVar1);
      *puVar2 = *(undefined4 *)(unaff_EBP + 0x20);
    }
    FUN_51003dbd();
    return;
  }
LAB_51003ce8:
  FUN_51003dbd();
  return;
}


