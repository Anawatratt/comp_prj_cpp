#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UVerticalBox;
class UImage;
class UButton;
#include "ShopHealthty__pf1629536273.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Ingame/WorldBuilding/Shop_1/ShopHealthty.ShopHealthty_C", OverrideNativeName="ShopHealthty_C"))
class UShopHealthty_C__pf1629536273 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="All_Box", Category="ShopHealthty", OverrideNativeName="All_Box"))
	UVerticalBox* bpv__All_Box__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background_work", Category="ShopHealthty", OverrideNativeName="Background_work"))
	UImage* bpv__Background_work__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_BG", Category="ShopHealthty", OverrideNativeName="Box_BG"))
	UImage* bpv__Box_BG__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_L", Category="ShopHealthty", OverrideNativeName="Box_L"))
	UVerticalBox* bpv__Box_L__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_L_Button", Category="ShopHealthty", OverrideNativeName="Box_L_Button"))
	UButton* bpv__Box_L_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_M", Category="ShopHealthty", OverrideNativeName="Box_M"))
	UVerticalBox* bpv__Box_M__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_M_Button", Category="ShopHealthty", OverrideNativeName="Box_M_Button"))
	UButton* bpv__Box_M_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_S", Category="ShopHealthty", OverrideNativeName="Box_S"))
	UVerticalBox* bpv__Box_S__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_S_Button", Category="ShopHealthty", OverrideNativeName="Box_S_Button"))
	UButton* bpv__Box_S_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_XL", Category="ShopHealthty", OverrideNativeName="Box_XL"))
	UVerticalBox* bpv__Box_XL__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Box_XL_Button", Category="ShopHealthty", OverrideNativeName="Box_XL_Button"))
	UButton* bpv__Box_XL_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Box", Category="ShopHealthty", OverrideNativeName="Exit_Box"))
	UVerticalBox* bpv__Exit_Box__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Button", Category="ShopHealthty", OverrideNativeName="Exit_Button"))
	UButton* bpv__Exit_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_87", Category="ShopHealthty", OverrideNativeName="Image_87"))
	UImage* bpv__Image_87__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_239", Category="ShopHealthty", OverrideNativeName="Image_239"))
	UImage* bpv__Image_239__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_352", Category="ShopHealthty", OverrideNativeName="Image_352"))
	UImage* bpv__Image_352__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_461", Category="ShopHealthty", OverrideNativeName="Image_461"))
	UImage* bpv__Image_461__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Run", Category="ShopHealthty", OverrideNativeName="Run"))
	UImage* bpv__Run__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Work_box", Category="ShopHealthty", OverrideNativeName="Work_box"))
	UVerticalBox* bpv__Work_box__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Get Energy Value", Category="Default", MultiLine="true", OverrideNativeName="GetEnergyValue"))
	TArray<float> bpv__GetEnergyValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pervius Day", Category="Default", MultiLine="true", OverrideNativeName="PerviusDay"))
	float bpv__PerviusDay__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value"))
	float b0l__CallFunc_ReadStats_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_1"))
	float b0l__CallFunc_ReadStats_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	float b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	float b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	float b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	float b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	float b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_2"))
	float b0l__CallFunc_ReadStats_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_3"))
	float b0l__CallFunc_ReadStats_Value_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_4"))
	float b0l__CallFunc_ReadStats_Value_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_5"))
	float b0l__CallFunc_ReadStats_Value_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ReadStats_Value_6"))
	float b0l__CallFunc_ReadStats_Value_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<float> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<float> b0l__K2Node_MakeArray_Array_1__pf;
	UShopHealthty_C__pf1629536273(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ShopHealthty__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ShopHealthty__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ShopHealthty__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ShopHealthty__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Shop_1_Exit_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Shop_1_Exit_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Shop_1_Box_XL_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Shop_1_Box_XL_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Shop_1_Box_M_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Shop_1_Box_M_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Shop_1_Box_L_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Shop_1_Box_L_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Shop_1_Button_117_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Shop_1_Button_117_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
