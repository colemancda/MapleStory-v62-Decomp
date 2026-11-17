/* FUN_00453336 - 0x00453336 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00453336(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  uVar4 = extraout_ECX;
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x4ae);
  uVar1 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045205d(uVar1,uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  puVar3 = *(undefined4 **)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + 8);
  *puVar3 = 0x14;
  puVar3[1] = 0x97;
  if (*(int *)(iVar2 + 0x1c) == 0) {
    puVar3[1] = 0x9f;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


