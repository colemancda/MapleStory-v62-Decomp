/* FUN_008475f9 - 0x008475f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008475f9(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if ((uVar1 & 0xff) != 0) {
    do {
      uVar2 = FUN_0042459a();
      FUN_0045a1d8(unaff_EBP + -0x10,uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) || (**(char **)(unaff_EBP + -0x10) == '\0')
         ) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        break;
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0xaff);
      uVar2 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + -0x14,uVar2,*(undefined4 *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      FUN_00471102(unaff_EBP + -0x14,0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x18) < (int)(uVar1 & 0xff));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


