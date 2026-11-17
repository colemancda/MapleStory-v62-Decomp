/* ptr_0060d3a1 - 0x0060d3a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0060d3a1(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar2;
  uint uStack_10;
  
  FUN_00879bb8();
  if (((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) && (*(int *)(unaff_EBP + 8) == 0xd)) {
    if (*(int *)(extraout_ECX + 0x224) != 0) {
      uStack_10 = unaff_EBP + 8;
      puVar1 = (undefined4 *)FUN_0045b90e();
      if (((char *)*puVar1 == (char *)0x0) || (*(char *)*puVar1 == '\0')) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      uStack_10 = 0x60d3f5;
      FUN_00414ebb();
      if (uVar2 == 0) {
        uStack_10 = unaff_EBP + 0xc;
        FUN_0045b90e();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_10 = uVar2;
        FUN_004a2fef();
        uStack_10 = 0;
        *(uint **)(unaff_EBP + -0x10) = &uStack_10;
        FUN_00414f8b(unaff_EBP + 0xc);
        FUN_005c149f();
        uStack_10 = -(uint)(*(int *)(extraout_ECX + 0x224) != 0) &
                    *(int *)(extraout_ECX + 0x224) + 4U;
        FUN_00817f6e();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_10 = 0x60d459;
        FUN_00414ebb();
      }
    }
  }
  else {
    uStack_10 = *(uint *)(unaff_EBP + 0xc);
    FUN_004bc822(*(undefined4 *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


