/* FUN_0047cb0a - 0x0047cb0a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047cb0a(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x969);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0047c7cc(0,uVar1,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x96a);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0047c874(0,uVar1,0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x96b);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0047c874(0,uVar1,0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


