/* FUN_006e4ae6 - 0x006e4ae6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e4ae6(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_1c;
  uint uStack_18;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xa80) == 0) {
LAB_006e4b0f:
    bVar1 = false;
  }
  else {
    uStack_18 = 0x6e4b06;
    iVar2 = FUN_004b3d90();
    if (iVar2 == 0) goto LAB_006e4b0f;
    bVar1 = true;
  }
  if ((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) {
    if (*(int *)(unaff_EBP + 8) != 0xd) {
      if (*(int *)(unaff_EBP + 8) == 0x1b) {
        *(undefined4 *)(extraout_ECX + 0x58) = 0;
        uStack_18 = -(uint)(extraout_ECX != 4) & extraout_ECX;
        uStack_1c = 0x6e4b3c;
        FUN_00817f6e();
      }
      goto LAB_006e4b82;
    }
    if (bVar1) {
      uStack_18 = unaff_EBP + -0x10;
      uStack_1c = 0x6e4b51;
      FUN_0048b998();
      uStack_1c = 0x6e4b58;
      uVar3 = FUN_0045b90e();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c;
      FUN_006ea77e(&uStack_1c,uVar3);
      FUN_006ea600();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_18 = 0x6e4b82;
      FUN_00414ebb();
      goto LAB_006e4b82;
    }
  }
  else {
LAB_006e4b82:
    if (bVar1) goto LAB_006e4b93;
  }
  uStack_18 = *(undefined4 *)(unaff_EBP + 0xc);
  uStack_1c = *(undefined4 *)(unaff_EBP + 8);
  FUN_0078a38f();
LAB_006e4b93:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


