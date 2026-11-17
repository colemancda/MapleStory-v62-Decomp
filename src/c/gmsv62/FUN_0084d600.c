/* FUN_0084d600 - 0x0084d600 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084d600(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar2 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar2 == '\0') {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0xb7a);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00434e21(unaff_EBP + 8,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar2 == '\x01') {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0xb7b);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + 8,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar2 == '\x02') {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xb7c);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + 8,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar2 == '\x03') {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xb7d);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00434e21(unaff_EBP + 8,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb7e);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00434e21(unaff_EBP + 8,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00414ebb();
  FUN_00471102(unaff_EBP + 8,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


