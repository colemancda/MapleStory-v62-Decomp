/* FUN_007d299b - 0x007d299b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007d299b(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (DAT_00973cd8 != 0) {
    (*DAT_0097b534)(*(undefined4 *)(DAT_00973cd8 + 4),6);
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    iVar1 = FUN_007d2937(*(undefined4 *)(unaff_EBP + 0xc));
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_007d2a9e;
    }
  }
  uVar2 = FUN_00679d22(unaff_EBP + 0xc,0x86e);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007d27a3(unaff_EBP + -0x10,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x86c);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar1 = FUN_004538dc(uVar2,0,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    if (iVar1 != -1) {
      uVar2 = FUN_0045e053(unaff_EBP + -0x14,0,iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414f8b(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      sVar4 = _strlen(*(char **)(unaff_EBP + 8));
      FUN_0045efbb(*(undefined4 *)(unaff_EBP + 8),sVar4);
      (*DAT_0097b4d0)(*(undefined4 *)(unaff_EBP + -0x10),5);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  uVar2 = 0;
LAB_007d2a9e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


