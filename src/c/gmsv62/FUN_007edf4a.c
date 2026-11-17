/* FUN_007edf4a - 0x007edf4a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007edf4a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) < 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 0x1c,0x3bc);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00434e21(extraout_ECX + 0xac,uVar2,*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  *(undefined4 *)(extraout_ECX + 0xc0) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(extraout_ECX + 0xb0) = *(undefined4 *)(unaff_EBP + 0x18);
  *(undefined4 *)(extraout_ECX + 0xb4) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0xb8) = *(undefined4 *)(unaff_EBP + 0x10);
  *(int *)(extraout_ECX + 0xd0) = iVar1;
  FUN_007ee56d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


