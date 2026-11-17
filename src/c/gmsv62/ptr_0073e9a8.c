/* ptr_0073e9a8 - 0x0073e9a8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0073e9a8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_00000018;
  undefined4 *in_stack_0000001c;
  
code_r0x0073e9a8:
  FUN_0087a1b0();
  iVar2 = *(int *)(DAT_00978368 + 0x2098);
  *(BADSPACEBASE **)(unaff_EBP + -0x20) = register0x00000010;
  if (iVar2 == unaff_EBX) {
    *(int *)(unaff_EBP + -0x1c) = unaff_EBX;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = iVar2 + 4;
  }
  (*DAT_0097b4cc)();
  iVar2 = (*DAT_0097b4bc)(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar2 != 0) {
    in_stack_0000001c = (undefined4 *)(unaff_ESI + 0xc);
    in_stack_00000018 = *(int *)(unaff_EBP + -0x24) + 0x27;
    (*DAT_0097b504)();
    param_1 = *(int *)(unaff_EBP + 8);
    iVar2 = (*DAT_0097b57c)();
    if (iVar2 != 0) {
      (*DAT_0097b4cc)();
      FUN_0087a1b0();
      uVar3 = FUN_00411641(&stack0x00000000);
      uVar3 = FUN_0045010e(uVar3);
      *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffffc;
      FUN_00414edd(uVar3,0xffffffff);
      FUN_00748724();
      FUN_0073dd5c();
      *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
      FUN_00402676();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x28) != unaff_EBX) {
        FUN_00748869();
      }
      uVar3 = 1;
LAB_0073ea6b:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar3;
    }
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  in_stack_0000001c = (undefined4 *)0x73ea30;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x28) != unaff_EBX) {
    in_stack_00000018 = 0x73ea42;
    FUN_00748869();
    *(int *)(unaff_EBP + -0x28) = unaff_EBX;
  }
LAB_0073ea53:
  do {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -0xd;
    if (*(int *)(unaff_EDI + 0xc6c) <= *(int *)(unaff_EBP + -0x14)) {
      uVar3 = 0;
      goto LAB_0073ea6b;
    }
    if (DAT_0097be44 == unaff_EBX) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(DAT_0097be44 + -4);
    }
    iVar1 = *(int *)(unaff_EDI + 0xaa0);
    if (*(int *)(iVar1 + 0x3c) == unaff_EBX) {
      iVar1 = -1;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x3c);
    }
    uVar4 = (iVar2 - *(int *)(unaff_EBP + -0x14)) + iVar1;
  } while ((((int)uVar4 < unaff_EBX) || (DAT_0097be44 == unaff_EBX)) ||
          (*(uint *)(DAT_0097be44 + -4) <= uVar4));
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(DAT_0097be44 + uVar4 * 8 + 4);
  in_stack_0000001c = (undefined4 *)0x73e88e;
  FUN_00748841();
  in_stack_0000001c = *(undefined4 **)(*(int *)(unaff_EBP + -0x28) + 0x18);
  in_stack_00000018 = *(int *)(unaff_EBP + -0x28) + 0x10;
  *(int *)(unaff_EBP + -4) = unaff_EBX;
  iVar2 = FUN_00413367();
  if (iVar2 == 0xe) {
LAB_0073e8d7:
    if ((*(int *)(*(int *)(unaff_EBP + -0x28) + 0x24) != unaff_EBX) &&
       (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x28) != unaff_EBX)) goto code_r0x0073e8ec;
  }
  else {
    in_stack_0000001c = *(undefined4 **)(*(int *)(unaff_EBP + -0x28) + 0x18);
    in_stack_00000018 = *(int *)(unaff_EBP + -0x28) + 0x10;
    iVar2 = FUN_00413367();
    if (iVar2 == 0xf) goto LAB_0073e8d7;
    in_stack_0000001c = *(undefined4 **)(*(int *)(unaff_EBP + -0x28) + 0x18);
    in_stack_00000018 = *(int *)(unaff_EBP + -0x28) + 0x10;
    iVar2 = FUN_00413367();
    if (iVar2 == 0x11) goto LAB_0073e8d7;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  in_stack_0000001c = (undefined4 *)0x73ea53;
  FUN_00748853();
  goto LAB_0073ea53;
code_r0x0073e8ec:
  unaff_ESI = (*(int *)(unaff_EDI + 0xc74) - (-(uint)(*(int *)(unaff_EDI + 0xc68) != 3) & 5)) +
              *(int *)(unaff_EDI + 0xc64) + *(int *)(unaff_EBP + -0x18);
  in_stack_00000018 = 0x3a;
  iVar2 = FUN_005e312e();
  in_stack_0000001c = (undefined4 *)(iVar2 + -1);
  in_stack_00000018 = unaff_EBP + -0x10;
  FUN_0046fcad();
  in_stack_0000001c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  in_stack_00000018 = 0x73e93a;
  FUN_00403191();
  in_stack_0000001c = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  in_stack_00000018 = 0x73e94a;
  FUN_00411641();
  *(int **)(unaff_EBP + -0x24) = &stack0x00000018;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074883d();
  FUN_0073eaf2();
  FUN_0044974c();
  uVar3 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  in_stack_0000001c = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  in_stack_00000018 = 0x73e98c;
  in_stack_0000001c = (undefined4 *)FUN_00402bc3();
  if ((int)in_stack_0000001c < unaff_EBX) {
    in_stack_00000018 = 0x73e997;
    FUN_00878dfb();
  }
  param_1 = unaff_EBX;
  in_stack_00000018 = unaff_EBX;
  in_stack_0000001c = (undefined4 *)unaff_EBX;
  (*DAT_0097b4cc)();
  goto code_r0x0073e9a8;
}


