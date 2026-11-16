/* FUN_50c05438 - 0x50c05438 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c05438(void)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  void *this;
  undefined4 *puVar4;
  void *this_00;
  int unaff_EBP;
  
  FUN_50c10270();
  if (*(int *)((int)this_00 + 4) == 0) {
    uVar3 = *(uint *)((int)this_00 + 8);
  }
  else {
    if (*(uint *)((int)this_00 + 0xc) <= *(uint *)((int)this_00 + 0x14)) goto LAB_50c05470;
    uVar3 = *(int *)((int)this_00 + 8) * 2 + 1;
  }
  if (uVar3 != 0) {
    FUN_50c0e8db(this_00,uVar3,0);
  }
LAB_50c05470:
  uVar3 = FUN_50c04c85(*(int **)(unaff_EBP + 8));
  uVar3 = uVar3 % *(uint *)((int)this_00 + 8);
  puVar4 = *(undefined4 **)(*(int *)((int)this_00 + 4) + uVar3 * 4);
  puVar1 = (undefined4 *)(*(int *)((int)this_00 + 4) + uVar3 * 4);
  do {
    if (puVar4 == (undefined4 *)0x0) {
      *(int *)((int)this_00 + 0xc) = *(int *)((int)this_00 + 0xc) + 1;
      this = (void *)FUN_50c05c76();
      *(void **)(unaff_EBP + -0x10) = this;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (this == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_50c059e0(this,*(int **)(unaff_EBP + 8),*puVar1);
      }
      if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar4 + 3),
                   (IBinding *)**(undefined4 **)(unaff_EBP + 0xc));
      }
      *puVar1 = puVar4;
LAB_50c054f4:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar4;
    }
    bVar2 = FUN_50c04bb8(puVar4 + 2,*(undefined4 **)(unaff_EBP + 8));
    if (bVar2) {
      if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar4 + 3),
                   (IBinding *)**(undefined4 **)(unaff_EBP + 0xc));
      }
      goto LAB_50c054f4;
    }
    puVar4 = (undefined4 *)puVar4[1];
  } while( true );
}


