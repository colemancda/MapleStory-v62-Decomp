/* FUN_510035e8 - 0x510035e8 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 FUN_510035e8(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_51005950();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  if ((*(int *)(unaff_EBP + 0xc) == 0) ||
     (puVar1 = *(undefined4 **)(unaff_EBP + 0x10), puVar1 == (undefined4 *)0x0)) {
    uVar4 = 0x80004003;
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_51004285(&DAT_5100920c,(_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0x10)
                 ,0);
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffd8;
    FUN_510050c3();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_51003dff((int *)(unaff_EBP + 0x10));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_5100569c();
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      FUN_5100581a(0x80004003);
    }
    FUN_510056ed(*(void **)(unaff_EBP + 0x10),unaff_EBP + -0x14);
    piVar2 = *(int **)(unaff_EBP + -0x14);
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(*piVar2 + -4) >> 1;
    }
    if (uVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_510042f7(*(undefined4 *)(unaff_EBP + 0xc),
                   (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),0);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x18);
      piVar2 = *(int **)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *puVar1 = uVar4;
      if (piVar2 != (int *)0x0) {
        FUN_510052d4(piVar2);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
      }
      uVar4 = 0;
    }
    else {
      if (piVar2 != (int *)0x0) {
        FUN_510052d4(piVar2);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
      }
      uVar4 = 0x80004001;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


