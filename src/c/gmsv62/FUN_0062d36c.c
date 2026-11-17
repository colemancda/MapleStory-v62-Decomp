/* FUN_0062d36c - 0x0062d36c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined8 FUN_0062d36c(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(char **)(unaff_EBP + 8) == (char *)0x0) || (**(char **)(unaff_EBP + 8) == '\0')) {
    uVar3 = DAT_008ed198;
    uVar4 = DAT_008ed19c;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      uVar3 = DAT_008ed190;
      uVar4 = DAT_008ed194;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_0045e070(unaff_EBP + 0xc,4);
    uVar1 = FUN_0087b6ab(*puVar2);
    *(undefined2 *)(unaff_EBP + -0x24) = uVar1;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_0045e053(unaff_EBP + 0xc,4,6);
    uVar1 = FUN_0087b6ab(*puVar2);
    *(undefined2 *)(unaff_EBP + -0x22) = uVar1;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_0045e053(unaff_EBP + 0xc,6,8);
    uVar1 = FUN_0087b6ab(*puVar2);
    *(undefined2 *)(unaff_EBP + -0x1e) = uVar1;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_0045e08c(unaff_EBP + 0xc,2);
    uVar1 = FUN_0087b6ab(*puVar2);
    *(undefined2 *)(unaff_EBP + -0x1c) = uVar1;
    FUN_00414ebb();
    *(undefined2 *)(unaff_EBP + -0x16) = 0;
    *(undefined2 *)(unaff_EBP + -0x18) = 0;
    *(undefined2 *)(unaff_EBP + -0x1a) = 0;
    *(undefined2 *)(unaff_EBP + -0x20) = 0;
    SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x24),(LPFILETIME)(unaff_EBP + -0x14));
    uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
    uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return CONCAT44(uVar4,uVar3);
}


