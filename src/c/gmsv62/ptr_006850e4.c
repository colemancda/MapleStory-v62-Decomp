/* ptr_006850e4 - 0x006850e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_006850e4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *param_2 + -0x31d + param_1;
  if ((iVar1 < unaff_EBX) || (param_1 <= iVar1)) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_00686af2();
    iVar1 = *(int *)(iVar1 + 4);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    if (iVar1 != unaff_EBX) {
      InterlockedIncrement((LONG *)(iVar1 + 4));
    }
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
    *(int *)(unaff_EBP + -4) = unaff_EBX;
    if (iVar1 == 1) {
      *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff4;
      FUN_0068684c();
      *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
      iVar1 = unaff_EBX;
      iVar4 = unaff_EBX;
      iVar5 = unaff_EBX;
      iVar6 = unaff_EBX;
      iVar7 = unaff_EBX;
      iVar8 = unaff_EBX;
      iVar2 = FUN_0068686b();
      FUN_007529b7(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                   *(undefined4 *)(iVar2 + 0x20),iVar1,iVar4,iVar5,iVar6,iVar7,iVar8);
    }
    else if (iVar1 == 2) {
      FUN_0064d61f();
      FUN_00755feb();
    }
    else if (iVar1 == 3) {
      FUN_0068686b();
      *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffe4;
      FUN_00450368();
      *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffe0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00679d22(&stack0xffffffe0,0xd96);
      *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
      FUN_0074da18(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != unaff_EBX) {
      FUN_006868f7();
    }
    uVar3 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


