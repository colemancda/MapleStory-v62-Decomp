/* ptr_0087e266 - 0x0087e266 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall ptr_0087e266(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined1 *puVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar1 + -4) = unaff_EBP;
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined **)(iVar1 + -0xc) = &DAT_008f3fb0;
  *(code **)(iVar1 + -0x10) = ptr_0087b11c;
  *(void **)(iVar1 + -0x14) = ExceptionList;
  ExceptionList = (void *)(iVar1 + -0x14);
  *(undefined4 *)(iVar1 + -0x18) = param_1;
  *(undefined4 *)(iVar1 + -0x1c) = param_1;
  *(undefined4 *)(iVar1 + -0x20) = unaff_EBX;
  *(undefined4 *)(iVar1 + -0x24) = unaff_ESI;
  puVar4 = (undefined1 *)(iVar1 + -0x28);
  *(undefined4 *)(iVar1 + -0x28) = unaff_EDI;
  *(int *)(iVar1 + -0x1c) = iVar1 + -0x28;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -0x2c) = 0x87e4b3;
  iVar3 = FUN_0087e371();
  if (*(int *)(iVar3 + 0x60) != 0) {
    *(undefined4 *)(iVar1 + -8) = 1;
    *(undefined4 *)(iVar1 + -0x2c) = 0x87e4c4;
    iVar3 = FUN_0087e371();
    pcVar2 = *(code **)(iVar3 + 0x60);
    puVar4 = (undefined1 *)(iVar1 + -0x2c);
    *(undefined4 *)(iVar1 + -0x2c) = 0x87e4c7;
    (*pcVar2)();
    *(undefined4 *)(iVar1 + -8) = 0;
  }
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x87e4e0;
  FUN_00885f03();
  return;
}


