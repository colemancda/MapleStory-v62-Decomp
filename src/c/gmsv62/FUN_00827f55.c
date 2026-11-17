/* FUN_00827f55 - 0x00827f55 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00827f55(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00879bb8();
  FUN_0087a1b0();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  pcVar1 = *(char **)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    FUN_00414f8b(extraout_ECX + 0x20);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (-1 < *(int *)(unaff_EBP + 0xc)) {
      iVar3 = *(int *)(unaff_EBP + 0xc) + 1;
      do {
        uVar4 = 0;
        FUN_0045ed72(0);
        FUN_0045ee27(uVar4);
        _memset((void *)(unaff_EBP + -0x101c),0,0x1000);
        puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0x3be);
        FUN_0087c9ab(*(undefined4 *)(unaff_EBP + -0x14),*puVar2,unaff_EBP + -0x101c);
        FUN_00414ebb();
        FUN_00414edd(unaff_EBP + -0x101c,0xffffffff);
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + -4);
        }
        uVar4 = FUN_0045e053(unaff_EBP + -0x1c,uVar4,0xffffffff);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00414f8b(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00414ebb();
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


