/* FUN_00428d4a - 0x00428d4a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00428d4a(void)

{
  IBinding *pIVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00434c78();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar3 = FUN_007d1e08();
  puVar4 = (undefined4 *)FUN_00436ebe();
  *puVar4 = uVar3;
  pIVar1 = *(IBinding **)(unaff_EBP + 0xc);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar4 + 1),pIVar1);
  FUN_00435651(*(undefined4 *)(unaff_EBP + 0x10));
  puVar4[4] = *(undefined4 *)(unaff_EBP + 0x18);
  puVar4[3] = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(unaff_EBP + 0x1c);
  FUN_0043443b(unaff_EBP + -0x18);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x14);
  FUN_00434cab();
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00434d73(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (pIVar1 != (IBinding *)0x0) {
    (**(code **)(*(int *)pIVar1 + 8))(pIVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


