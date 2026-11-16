/* FUN_50005d7b - 0x50005d7b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * FUN_50005d7b(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *this;
  int unaff_EBP;
  
  FUN_50012d80();
  if (*(int *)((int)this + 4) == 0) {
    uVar4 = *(uint *)((int)this + 8);
  }
  else {
    if (*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) goto LAB_50005db3;
    uVar4 = *(int *)((int)this + 8) * 2 + 1;
  }
  if (uVar4 != 0) {
    FUN_5000669e(this,uVar4,0);
  }
LAB_50005db3:
  uVar4 = FUN_50005d5a(*(int **)(unaff_EBP + 8));
  uVar4 = uVar4 % *(uint *)((int)this + 8);
  puVar6 = *(undefined4 **)(*(int *)((int)this + 4) + uVar4 * 4);
  puVar1 = (undefined4 *)(*(int *)((int)this + 4) + uVar4 * 4);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      puVar6 = (undefined4 *)FUN_5000696f();
      *(undefined4 **)(unaff_EBP + -0x10) = puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar2 = *puVar1;
        *puVar6 = &PTR_LAB_500144a8;
        piVar3 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puVar6[1] = uVar2;
        FUN_500063d4(puVar6 + 2,piVar3);
        puVar6[7] = 0;
        *puVar6 = &PTR_FUN_500144a4;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_5000362c(*(int *)(unaff_EBP + 0xc));
        FUN_50003649((int)(puVar6 + 6));
        puVar6[7] = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 4);
      }
      *puVar1 = puVar6;
LAB_50005e6e:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar6;
    }
    iVar5 = FUN_50005d2a(puVar6 + 2,*(undefined4 **)(unaff_EBP + 8));
    if (iVar5 != 0) {
      iVar5 = *(int *)(unaff_EBP + 0xc);
      if (iVar5 != 0) {
        FUN_5000362c(iVar5);
        FUN_50003649((int)(puVar6 + 6));
        puVar6[7] = *(undefined4 *)(iVar5 + 4);
      }
      goto LAB_50005e6e;
    }
    puVar6 = (undefined4 *)puVar6[1];
  } while( true );
}


