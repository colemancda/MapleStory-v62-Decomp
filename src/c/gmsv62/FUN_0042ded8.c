/* FUN_0042ded8 - 0x0042ded8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042ded8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iVar7;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined1 *local_94;
  int iStack_90;
  
  FUN_00879bb8();
  iStack_90 = 0x42def6;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_90 = 0x42df04;
  FUN_00403191();
  iStack_90 = 0;
  local_94 = (undefined1 *)(unaff_EBP + -0x54);
  iStack_98 = unaff_EBP + -0x44;
  *(int **)(unaff_EBP + -0x28) = &iStack_9c;
  iStack_a0 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a4 = 0x42df20;
  iStack_9c = extraout_ECX;
  FUN_004033a1();
  iStack_a0 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a4 = 0x42df2d;
  FUN_00405a1d();
  iStack_a4 = 0x42df34;
  FUN_00402660();
  iStack_a4 = 0x42df3b;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_94 = (undefined1 *)0x42df46;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_90 = 0x42df61;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_90 = 0x42df6f;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_90 = 0x42df7c;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_90 = 0x42df87;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_90 = 0x42df94;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_90 = 0x42df9f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_90 = 0x42dfac;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_90 = 0x42dfb7;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    while( true ) {
      FUN_0087a1b0();
      iStack_90 = 0;
      iStack_98 = *(int *)(unaff_EBP + 8);
      iStack_9c = 0x42dfd8;
      local_94 = &stack0xffffff78;
      iStack_98 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x28) = &local_94;
      iStack_9c = 0x42dfe4;
      FUN_004033a1();
      iStack_98 = unaff_EBP + -0x74;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x42dff4;
      FUN_0040263d();
      iStack_9c = 0x42dffb;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      local_94 = (undefined1 *)0x42e006;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x18) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar1 != 0) {
        iStack_90 = 0x42e01c;
        iVar1 = FUN_00404b30();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          iStack_90 = 0x42e02a;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_90 = 0x42e037;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_90 = 0x42e042;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x14) == (int *)0x0) break;
      iStack_90 = 0x42e053;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    }
    FUN_00426311();
    piVar5 = *(int **)(unaff_EBP + 0xc);
    iVar7 = *piVar5;
    iVar1 = piVar5[2];
    *(int *)(unaff_EBP + -0x14) = iVar7;
    if (iVar7 < iVar1) {
      while( true ) {
        if (*(int *)(unaff_EBP + 0x18) != 0) {
          uVar2 = *(int *)(unaff_EBP + 0x14) / 3;
          if (uVar2 == 0) {
            iVar7 = FUN_004133f0();
          }
          else {
            uVar3 = FUN_004133f0();
            iVar7 = uVar3 % uVar2 + *(int *)(unaff_EBP + -0x14);
          }
        }
        *(undefined4 *)(unaff_EBP + -0x80) = 0;
        *(undefined4 *)(unaff_EBP + -0x7c) = 0;
        *(undefined4 *)(unaff_EBP + -0x78) = 0;
        *(undefined ***)(unaff_EBP + -0x88) = &PTR_FUN_008e8ab0;
        iStack_90 = piVar5[3];
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        local_94 = (undefined1 *)piVar5[1];
        iStack_9c = 0x42e0d9;
        iStack_98 = iVar7;
        FUN_00861498();
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x7c);
        if (*(int *)(unaff_EBP + -0x7c) != 0) {
          do {
            iStack_90 = 0x42e0f1;
            uVar4 = FUN_004251cf();
            *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
            FUN_0087a1b0();
            iStack_90 = 0;
            iStack_98 = 0;
            iStack_9c = *(int *)(unaff_EBP + 8);
            iStack_a0 = 0x42e10a;
            local_94 = &stack0xffffff78;
            iStack_98 = FUN_0042517f();
            iStack_9c = 0x42e112;
            iStack_98 = FUN_00412335();
            *(undefined1 ***)(unaff_EBP + -0x2c) = &local_94;
            iStack_9c = 0x42e11e;
            FUN_004033a1();
            iStack_98 = unaff_EBP + -0x74;
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iStack_9c = 0x42e12e;
            FUN_0040263d();
            iStack_9c = 0x42e135;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            local_94 = (undefined1 *)0x42e140;
            uVar4 = FUN_004032b4();
            iStack_90 = 0;
            local_94 = (undefined1 *)0xc00614a4;
            *(int **)(unaff_EBP + -0x2c) = &iStack_98;
            iStack_9c = 0;
            *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
            iStack_a0 = 0x42e156;
            iStack_98 = extraout_ECX_00;
            FUN_00424e0a();
            iStack_9c = -2;
            iStack_a0 = 5;
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iStack_a4 = 0x42e163;
            iVar1 = FUN_0042517f();
            iStack_a4 = unaff_EBP + -0x18;
            uStack_a8 = 0x42e16e;
            piVar5 = (int *)FUN_00434e55();
            iStack_9c = iVar1 + *piVar5;
            *(int **)(unaff_EBP + -0x30) = &iStack_a4;
            uStack_a8 = 0;
            uStack_ac = 0x42e181;
            iStack_a4 = extraout_ECX_01;
            iStack_a0 = iVar7;
            FUN_00424dd7();
            uStack_a8 = 0;
            *(undefined4 **)(unaff_EBP + -0x34) = &uStack_ac;
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            FUN_004251a3(unaff_EBP + -0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            puVar6 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x28);
            iStack_90 = 0x42e1af;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x24),
                       (IBinding *)*puVar6);
            if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
              iStack_90 = 0x42e1bc;
              (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iStack_90 = 0x42e1c9;
            iVar1 = FUN_00402bc3();
            if (iVar1 < 0) {
              iStack_90 = 0x42e1d4;
              FUN_00878dfb();
            }
          } while (*(int *)(unaff_EBP + -0x18) != 0);
          piVar5 = *(int **)(unaff_EBP + 0xc);
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        *(undefined ***)(unaff_EBP + -0x88) = &PTR_FUN_008e8ab0;
        FUN_00434e79();
        iVar7 = *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + 0x14);
        iVar1 = piVar5[2];
        *(int *)(unaff_EBP + -0x14) = iVar7;
        if (iVar1 <= iVar7) break;
        iVar7 = *(int *)(unaff_EBP + -0x14);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_90 = 0x42e21c;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


