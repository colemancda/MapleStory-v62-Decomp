/* FUN_50401252 - 0x50401252 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50401252(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar1 = FUN_504015ff();
  *(uint **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    FUN_5040284e();
    *puVar1 = (uint)&PTR_FUN_5042c154;
    puVar1[1] = (uint)&PTR_LAB_5042c140;
    InterlockedIncrement(&DAT_50438a3c);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar1 != (uint *)0x0) {
    InterlockedIncrement((LONG *)(puVar1 + 2));
    uVar2 = (**(code **)(*puVar1 + 0x80))();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
    InterlockedDecrement((LONG *)(puVar1 + 2));
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar3 = (**(code **)*puVar1)
                        (puVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
      *(int *)(unaff_EBP + -0x10) = iVar3;
      if (iVar3 == 0) goto LAB_504012ed;
    }
    (**(code **)(*puVar1 + 0x7c))(1);
  }
LAB_504012ed:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x10);
}


