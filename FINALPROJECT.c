#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void menu(void){
	system("cls");
	int option;
	printf("STEP 1:\nSelecting A Symptom\n");
	printf("(Enter the respective serial number to select an option)\n\n");
	printf("1. Abdominal Pain (Stomach Pain)\n");
	printf("2. Ankle Problems\n");
	printf("3. Cold and Flu\n");
	printf("4. Cough)\n");
	printf("5. Facial Swelling\n");
	printf("6. Cough\n");
	printf("7. Hand/Wrist/Arm Problems\n");
	printf("8. Headaches\n");
	printf("9. Hearing Problems\n");
	printf("10. Hip Problems\n");
	printf("11. Leg Problems\n");
	printf("12. Lower Back Pain\n");
	printf("13. Neck Pain\n");
	printf("14. Throat Problems\n");
	printf("15. Tooth Problems\n");
	
}

char YesNo(void){
	char Option;
	printf("\n\n\tYes\t\t\tNo\n\nEnter Option: ");
	scanf(" %c",&Option);
	return Option;
}

int input(void){
	int choice;
	printf("\nEnter your problem's serial number: ");
	scanf("%d",&choice);
	return choice;
}

void StomachPain(void){
	system("cls");
	char YesOrNo;
	printf("\n******************************Abdominal Pain (Stomach Pain)******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");

	printf("Does your pain get worse after you eat a big meal?\n\n");
	YesOrNo = YesNo();
	
	if(YesOrNo=='Y'||YesOrNo=='y'){
		printf("\nDo you feel pressure in your upper abdomen that gets worse when you bend over or lie down at night?\n\n");
		YesOrNo = YesNo();		
	
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYour problem may be a HIATAL HERNIA.");
			printf("\nSELF CARE:\nSee your doctor. Eat smaller meals, especially at night. Don’t lie down right after you eat. Use 2 or 3 pillows, or a foam wedge, or raise the head of your bed to prevent discomfort.");
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nIs the pain relieved by antacids?\n\n");
		YesOrNo = YesNo();
		
			if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYour pain may be from GASTRITIS, an ULCER or HEARTBURN; all are irritations of the stomach and esophagus.");
			printf("\nSELF CARE:\nEat smaller meals and use an over-the-counter antacid. If antacids don’t help, see your doctor.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDoes the pain start in your upper middle or upper right abdomen, and is it brought on by greasy or fatty foods?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYour pain may be a sign of GALLSTONES or CHOLECYSTITIS (infection of the gallbladder).");
			printf("\nSELF CARE:\nSee your doctor..");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDoes your pain get worse when you’re under stress or do you alternate between loose and hard bowel movements?\n\n");
		YesOrNo = YesNo();
		
			if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYour pain may be from IRRITABLE BOWEL SYNDROME, also known as SPASTIC COLON.");
			printf("\nSELF CARE:\nTry a diet high in soluble FIBER for 2 weeks. Take steps to reduce your stress and to exercise regularly. If you don’t get better, check with your doctor.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have soft or diarrhea-like bowel movements many times throughout the day and mucus or blood in your stools?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYou may have CROHN’S DISEASE or ULCERATIVE COLITIS, inflammatory diseases of the colon or large intestine.");
			printf("\nSELF CARE:\nSee your doctor. These disorders are treatable.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have recurrent bouts of pain in the lower left side of your abdomen along with fever?\n\n");
		YesOrNo = YesNo();
		
			if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYou may have DIVERTICULITIS, an infection of small pockets in the colon.");
			printf("\nSELF CARE:\nAny infection of the abdomen can be serious. CALL YOUR DOCTOR RIGHT AWAY.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have bright red blood in or on your bowel movements?\n\n");
		YesOrNo = YesNo();
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nBright red, bloody stools may be caused by a bleeding HEMORRHOID or a bleeding POLYP, but they can also be a sign of a more serious problem such as CANCER of the colon.");
			printf("\nSELF CARE:\nSee your doctor.");
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHas it been a few days or longer since you last had a bowel movement and do you have to strain when you have a bowel movement?\n\n");
		YesOrNo = YesNo();
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYour discomfort is probably from CONSTIPATION.");
			printf("\nSELF CARE:\nUse a simple bulk-forming laxative and be sure to add lots of FIBER and fluids to your diet. If the constipation persists, call your doctor.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHas your appetite decreased, and have you lost 10 to 15 pounds over the past few months without trying?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nUnintentional weight loss can be a sign of a serious condition such as CANCER.");
			printf("\nSELF CARE:\nSee your doctor.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo your skin or eyes have a yellow color, or is your urine dark?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYou may have VIRAL HEPATITIS a serious infection of the liver.");
			printf("\nSELF CARE:\nSee your doctor.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHave you had fever, sore throat or extreme tiredness?\n\n");
		YesOrNo = YesNo();
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYou may have MONONUCLEOSIS (“MONO”) or a similar VIRAL INFECTION.");
			printf("\nSELF CARE:\nSee your doctor. Treatment of mono includes rest, drinking plenty of fluids and taking medicine to treat the symptoms.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have abdominal bloating and discomfort made worse by milk or wheat products?\n\n");
		YesOrNo = YesNo();
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYour problem may be MALABSORPTION, an inability to absorb some foods, or LACTOSE INTOLERANCE or WHEAT INTOLERANCE (CELIAC DISEASE).");
			printf("\nSELF CARE:\nAvoid the foods and beverages that cause your symptoms. People who have lactose intolerance can use lactose enzyme tablets or drops to help them digest foods that contain lactose.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre your bowel movements yellow and greasy, and do they float in the toilet?\n\n");
		YesOrNo = YesNo();
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYour pancreas may not be producing enough enzymes for proper digestion. This condition is called PANCREATIC INSUFFICIENCY.");
			printf("\nSELF CARE:\nCall your doctor. He or she may ask for a sample of your bowel movements to confirm pancreatic insufficiency.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nYou might have a parasitic infection called GIARDIASIS. Other BOWEL INFECTIONS or MALABSORPTION may also cause these symptoms.\n\n");
		YesOrNo = YesNo();
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nYour pancreas may not be producing enough enzymes for proper digestion. This condition is called PANCREATIC INSUFFICIENCY.");
			printf("\nSELF CARE:\nCall your doctor. He or she may ask for a sample of your bowel movements to confirm pancreatic insufficiency.");
	}
	else{
		printf("For more information, please talk to your doctor. If you think your problem is serious, call right away.");
	}
	}
	}
		
	}
	}
		}
}
}
}
		
}
	
}
}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHas your appetite decreased, and have you lost 10 to 15 pounds over the past few months without trying?\n\n");
		printf("\tYes\t\t\tNo\n\nEnter Option: ");
		scanf(" %c",&YesOrNo);
		
		if(YesOrNo=='Y'||YesOrNo=='y'){
			printf("\nDIAGNOSIS:\nUnintentional weight loss can be a sign of a serious condition such as CANCER.");
			printf("\nSELF CARE:\nSee your doctor.");
		
		
	}
	}
	
	
}
}
}
}

void Ankle(void){
	system("cls");
	char YesOrNo;
	printf("\n******************************Ankle Problems******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Did you begin to have pain or swelling after a fall or a twisting injury or after the ankle was hit?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("Is there significant swelling and is the pain so intense you’re unable to walk on the ankle?");
	YesOrNo = YesNo();
	
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have a FRACTURE or a severe SPRAIN.");
			printf("\nSELF CARE:\nDon’t walk on the injured foot. Raise the leg and place ice on the swollen area. See your doctor promptly.");
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nIs there swelling and a bruise, but you’re still able to walk on the ankle?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYYou may have a SPRAINED ANKLE, or a FRACTURE of the FIBULA.");
			printf("\nSELF CARE:\nUse ice, elevation, rest and an elastic bandage to keep the swelling under control. See your doctor if the swelling and pain continue.");
	}
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have swelling, stiffness (especially in the morning) or pain that comes and goes in both ankles ?\n\n");
		YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have RHEUMATOID ARTHRITIS.");
			printf("\nSELF CARE:\nSee your doctor. He or she can prescribe medicine to help control the symptoms of rheumatoid arthritis.");
	}
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a fever, or is more than one joint swollen and red?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nFever along with a painful, swollen joint could be caused by an INFECTED JOINT. More than one affected joint could mean RHEUMATIC FEVER.");
			printf("\nSELF CARE:\nURGENT SEE YOUR DOCTOR RIGHT AWAY.");
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDid the pain come on suddenly, or does clothing or bedding that rubs against the joint cause pain?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have GOUT (inflammation caused by high uric acid level in the blood).");
			printf("\nSELF CARE:\nSee your doctor. During a gout attack, you should rest in bed. You can put a hot pad or an ice pack on your ankle to ease the pain.");
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you usually feel pain before or during a change in the weather, or are you experiencing swelling, stiffness and pain that gets worse during or after use of your ankle?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThese symptoms could be caused by OSTEOARTHRITIS, also called DEGENERATIVE JOINT DISEASE, or by previous trauma to the ankle.");
			printf("\nSELF CARE:\nSee your doctor. Use heat and an anti-inflammatory medicine to relieve discomfort.");
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nFor more information, please talk to your doctor. If you think your problem is serious, call right away.\n\n");
		
		
	}
	
	}
		
		
	}
	
		
	}
}
}

	}//IISE BAHAR NAE NIKALNA YES KA
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have swelling, stiffness (especially in the morning) or pain that comes and goes in both ankles ?\n\n");
		YesOrNo = YesNo();
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have RHEUMATOID ARTHRITIS.");
			printf("\nSELF CARE:\nSee your doctor. He or she can prescribe medicine to help control the symptoms of rheumatoid arthritis.");	
	}
	
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a fever, or is more than one joint swollen and red?\n\n");
		YesOrNo = YesNo();
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nFever along with a painful, swollen joint could be caused by an INFECTED JOINT. More than one affected joint could mean RHEUMATIC FEVER.");
			printf("\nSELF CARE:\nURGENT SEE YOUR DOCTOR RIGHT AWAY.");	
	}
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDid the pain come on suddenly, or does clothing or bedding that rubs against the joint cause pain?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have GOUT (inflammation caused by high uric acid level in the blood).");
			printf("\nSELF CARE:\nSee your doctor. During a gout attack, you should rest in bed. You can put a hot pad or an ice pack on your ankle to ease the pain.");	
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you usually feel pain before or during a change in the weather, or are you experiencing swelling, stiffness and pain that gets worse during or after use of your ankle?\n\n");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThese symptoms could be caused by OSTEOARTHRITIS, also called DEGENERATIVE JOINT DISEASE, or by previous trauma to the ankle.");
			printf("\nSELF CARE:\nSee your doctor. Use heat and an anti-inflammatory medicine to relieve discomfort.");	
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
			printf("\nFor more information, please talk to your doctor. If you think your problem is serious, call right away.");

		
	}
		
	}
		
	}
			
	}


	}// NO KA BAHAR NAE JANA 
}

void Cough(void){
	system("cls");
	char YesOrNo;
	printf("\n******************************Cough******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Has your cough begun recently?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("Did you inhale dust, particles or an object?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nIRRITATION OF THE AIRWAYS will cause coughing to attempt to clear the object or irritation out of the airway.");
	printf("\nSELF CARE:\nIf the coughing is severe or if you don’t believe the irritant has been cleared from your airway, see your doctor or go to the emergency room right away.");	
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nSELF CARE:\nIf the coughing is severe or if you don’t believe the irritant has been cleared from your airway, see your doctor or go to the emergency room right away.");	

	
}
	}//YES WALA
	
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre you very short of breath, and are you coughing up pink, frothy mucus?");
		YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYour symptoms may be from a serious condition called PULMONARY EDEMA (fluid in the lungs).");
	printf("\nSELF CARE:\nEMERGENCY\n\nGO TO THE NEAREST EMERGENCY ROOM RIGHT AWAY.");	
	}
	
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDoes your cough produce clear or pale yellow mucus?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have a viral illness such as a COLD or the FLU.");
	printf("\nSELF CARE:\nEMERGENCY\n\nGet plenty of rest, and drink lots of fluids. Try over-the-counter medicines to treat your symptoms.");	
	}
	
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDoes your cough produce yellow, tan or green mucus?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have an infection of the airways such as CHRONIC BRONCHITIS. If you have a fever with shaking chills and are very ill, you may have a more serious infection such as PNEUMONIA.");
	printf("\nSELF CARE:\nEMERGENCY\n\nSee your doctor. He or she can prescribe medicine to relieve your symptoms. Get plenty of rest, and drink lots of fluids. If you smoke, stop smoking.");	
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDoes the cough come with shortness of breath and wheezing?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThese symptoms may be a sign of ASTHMA, a constriction of the airways.");
	printf("\nSELF CARE:\nEMERGENCY\n\nAsthma can be dangerous and should be diagnosed and treated by your doctor.");	
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have swelling in your legs and/or shortness of breath when you are active or after you have been lying down?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
			printf("\nDo you have heart problems?");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nPersistent coughing can be caused by CONGESTIVE HEART FAILURE, especially when there is a buildup of fluid in the lungs.");
	printf("\nSELF CARE:\nEMERGENCY\n\nSee your doctor.");	
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHave you recently started coughing up blood or bloody sputum?");
		YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
			printf("\nHave you recently started having sharp chest pain, rapid heartbeat, swelling of the legs and sudden shortness of breath?");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nBloody mucus with these symptoms may mean that a blood clot has moved from your leg to your lungs. This is called PULMONARY EMBOLISM.");
	printf("\nSELF CARE:\nEMERGENCY\n\nSee your doctor.");	
	}
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a fever, chills and night sweats along with chest pain when you cough or take a deep breath?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThese symptoms may be caused by TUBERCULOSIS or another type of infection.");
	printf("\nSELF CARE:\nSee your doctor");	
	}
			if(YesOrNo=='n'||YesOrNo=='N'){
			printf("\nHave you unintentionally lost weight?");
			YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThis may be a sign of a serious illness, such as LUNG CANCER. Other signs of lung cancer may include a cough that produces bloody sputum, shortness of breath and wheezing.");
	printf("\nSELF CARE:\nSee your doctor right away.");	
	}
	if(YesOrNo=='n'||YesOrNo=='N'){
			printf("\nDid you inhale dust, particles or an object?");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nIRRITATION OF THE AIRWAYS will cause coughing to attempt to clear the object or irritation out of the airway.");
	printf("\nSELF CARE:\nIf the coughing is severe or if you don’t believe the irritant has been cleared from your airway, see your doctor or go to the emergency room right away.");	
	}
			
			else if(YesOrNo=='N'||YesOrNo=='n'){
	printf("\nSELF CARE:\nFor more information, please talk to your doctor. If you think your problem is serious, call your doctor right away.");	
	
			
		}
	
	}
		}
	}
	}
else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDid you inhale dust, particles or an object?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nIRRITATION OF THE AIRWAYS will cause coughing to attempt to clear the object or irritation out of the airway.");
	printf("\nSELF CARE:\nIf the coughing is severe or if you don’t believe the irritant has been cleared from your airway, see your doctor or go to the emergency room right away.");	
	}
	
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nSELF CARE:\nIf the coughing is severe or if you don’t believe the irritant has been cleared from your airway, see your doctor or go to the emergency room right away.");	

	}
	}
		}//naya
	if(YesOrNo=='y'||YesOrNo=='Y'){
			printf("\nDo you have a fever, chills and night sweats along with chest pain when you cough or take a deep breath?");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThese symptoms may be caused by TUBERCULOSIS or another type of infection.");
	printf("\nSELF CARE:\nSee your doctor.");	
	}
			
	
}
}
	}
}
}
}
}
 //NO WALA
}


void HairLoss(void){
	system("cls");
	char YesOrNo;
	printf("\n******************************Hair Loss******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Is your hair falling out in small patches?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("Are these patches red, itchy or oily?");
	YesOrNo = YesNo();

		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThis type of hair loss can be caused by SEBORRHEA, LICHEN PLANUS or RINGWORM.");
	printf("\nSELF CARE:\nSee your doctor.");	
		}
		else if(YesOrNo=='N'||YesOrNo=='n'){
	printf("\nDIAGNOSIS:\nSmall, coin-sized bald areas may be from ALOPECIA AREATA, an autoimmune disease that causes temporary hair loss.");
	printf("\nSELF CARE:\nSee your doctor.");	

}

}//yes wala
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre you a man who has gradually lost hair in the front or on the top of your head and has relatives with similar hair loss?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have classic MALE-PATTERN BALDNESS.");
	printf("\nSELF CARE:\nOver-the-counter and prescription medicines are available to treat male-pattern baldness. See your doctor. He or she will determine which treatment is right for you.");	
	}
	
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHave you used any chemicals on your hair, or have you worn tight braids or cornrows recently?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYour hair loss may be from FOLLICULAR DAMAGE.");
	printf("\nSELF CARE:\nTight braids, ponytails or cornrows can break and damage hair. Secure hair with covered rubber bands and try not to style it too tightly. Discontinue the use of harsh chemicals on the hair and scalp, which can also result in hair loss.");	
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre you taking any new medicines, or are you being treated for cancer?");
		YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nHair loss may be a side effect of MEDICINES, STEROIDS or CHEMOTHERAPY.");
	printf("\nSELF CARE:\nDiscuss these treatments with your doctor.");	
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHave you been weak, tired or anxious?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have IRON or ZINC DEFICIENCY, THYROID DISEASE or excess STRESS.");
	printf("\nSELF CARE:\nSee your doctor.");	
	}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre you a woman who is older than 50, or who has given birth within the last three months?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nHORMONE CHANGES may cause hair loss in women. If your hair loss has occurred gradually with advancing age, FOLLICULAR DEGENERATION may be the cause.");
	printf("\nSELF CARE:\nPost-pregnancy hormone changes usually reverse themselves without any treatment. While follicular degeneration cannot be reversed, gentle hair care may prolong the life of follicles.");	
	}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nFor more information, please talk to your doctor.");
	
	}
	
	
		
		
	}
	}
	}
}
	
}//no wala
}


void ColdAndFlu()
{
	system("cls");
	char YesOrNo;
	printf("\n******************************Cold And Flu******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Do you have a fever?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y')
	{
	printf("Do you have a sore throat and headache–without nasal drainage?");
	YesOrNo = YesNo();
		if(YesOrNo=='y'||YesOrNo=='Y')
		{
			printf("\nDIAGNOSIS:\nYou may have STREP THROAT, a bacterial infection.");
			printf("\nSELF CARE:\nSee your doctor if the sore throat or fever lasts longer than 48 hours. He or she can do a test to find out if you have strep throat. If you do, your doctor may give you an antibiotic to treat it. You should also get plenty of rest, and drink lots of water. Gargling with warm salt water may help relieve a sore throat.");
		}
		else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nDid your symptoms start suddenly, and do you have a combination of symptoms including muscle aches, chills, a sore throat, runny nose or cough?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have the FLU.");
			printf("\nSELF CARE:\nGet plenty of rest, and drink lots of fluids. Over-the-counter medicines may relieve some of your symptoms. Your doctor may suggest a prescription medicine that may shorten the course of the flu. Prevent the flu by getting a flu shot each fall.");
			}
		
		else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nDo you have a persistent cough that brings up yellowish or greenish mucus, wheezing and shortness of breath?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may be developing ACUTE BRONCHITIS, an infection of the airways.");
			printf("\nSELF CARE:\nGet plenty of rest, and drink lots of fluids. If you smoke, cut down on the number of cigarettes you smoke, or stop smoking. Use an over-the-counter medicine for pain and fever, and an expectorant to ease the coughing. A humidifier may also relieve some symptoms. If symptoms persist or worsen, contact your doctor.");
			}
		
		else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nDo you have a headache or muscle aches, nausea or vomiting, and watery diarrhea?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have GASTROENTERITIS (also called the stomach flu).");
			printf("\nSELF CARE:\nGet plenty of rest. Children who have gastroenteritis should be given an oral rehydration solution to avoid dehydration. Ease back into eating with bland foods and clear liquids.");
			}
			
		else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nDo you have a runny and/or itchy nose, sneezing, and itchy eyes?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have ALLERGIES.");
			printf("\nSELF CARE:\nTry an over-the-counter antihistamine medicine. If symptoms persist or worsen, contact your doctor.");
			}
			
		else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nDo you have sneezing, a sore throat, headache, congestion and a runny nose?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou probably have a COLD.");
			printf("\nSELF CARE:\nTry an over-the-counter cold medicine to treat the specific symptoms you are having. Get plenty of rest, and drink lots of fluid.");
			}
			
		else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nDo you have swelling or pain around your eyes, cheeks, nose or forehead, a headache, a dry cough, and/or discharge from the nose?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may be developing SINUSITIS.");
			printf("\nSELF CARE:\nSee your doctor. Acetaminophen, ibuprofen and/or warm compresses may help reduce facial pain. A cool mist vaporizer may help your sinuses drain more easily. Drink plenty of fluids.");
			}
		
		else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nFor more information, please talk to your doctor. If you think your problem is serious, call right away. WARNING: Due to the risk of Reye’s syndrome, don’t give aspirin to children without your doctor’s approval.\n\n");
		}
	}
}
}
}
}
}

	}
	else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nDo you have a runny and/or itchy nose, sneezing, and itchy eyes?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have ALLERGIES.");
			printf("\nSELF CARE:\nTry an over-the-counter antihistamine medicine. If symptoms persist or worsen, contact your doctor.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
			{
			printf("\nDo you have sneezing, a sore throat, headache, congestion and a runny nose?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou probably have a COLD.");
			printf("\nSELF CARE:\nTry an over-the-counter cold medicine to treat the specific symptoms you are having. Get plenty of rest, and drink lots of fluid.");
			}
		
			else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nDo you have swelling or pain around your eyes, cheeks, nose or forehead, a headache, a dry cough, and/or discharge from the nose?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may be developing SINUSITIS.");
			printf("\nSELF CARE:\nSee your doctor. Acetaminophen, ibuprofen and/or warm compresses may help reduce facial pain. A cool mist vaporizer may help your sinuses drain more easily. Drink plenty of fluids.");
			}
		
			else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nFor more information, please talk to your doctor. If you think your problem is serious, call right away. WARNING: Due to the risk of Reye’s syndrome, don’t give aspirin to children without your doctor’s approval.\n\n");
		}
	}
}
		}
	}
		

void FacialSwelling()
{
	system("cls");
	char YesOrNo;
	printf("\n******************************Facial Swelling******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Do you have a painless, soft to firm lump on your head, face or neck?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y')
	{
			printf("\nDIAGNOSIS:\nYou may have a SEBACEOUS CYST, a collection of oil under the skin. Sebaceous cysts are usually small and grow slowly.");
			printf("\nSELF CARE:\nSee your doctor is the cyst becomes tender or inflamed. Your doctor may suggest treating an inflamed cyst with injections. He or she may also recommend surgery to remove the cyst.");
	}
	else if(YesOrNo=='N'||YesOrNo=='n')
	{
		printf("\nAre your lips and eyes swollen and do you have a rash that looks like mosquito bites?\n\n");
		YesOrNo = YesNo();
			
		if(YesOrNo=='y'||YesOrNo=='Y')
		{	
			printf("\nDIAGNOSIS:\nYour symptoms may be from an ALLERGIC REACTION or HIVES.");
			printf("\nSELF CARE:\nEMERGENCY: If you have trouble breathing, your throat becomes tight, or the swelling becomes severe, see your doctor or go to the emergency room right away.");
		}
	
	else if(YesOrNo=='N'||YesOrNo=='n')
	{
		printf("\nDo you have a painful pink or red bump, or a group of smaller bumps on your forehead or face?\n\n");
		YesOrNo = YesNo();
			
		if(YesOrNo=='y'||YesOrNo=='Y')
		{	
			printf("\nDIAGNOSIS:\nYou may have a skin infection such as BOILS, CARBUNCLES, orACNE. A boil is a large, pus-filled bump. Multiple boils are called carbuncles. Acne occurs when oil glands start producing more oil and block pores. Acne can result in blackheads, whiteheads and pimples.");
			printf("\nSELF CARE:\nWarm compresses may help boils and carbuncles heal faster. See your doctor if you’re in pain or if the infection hasn’t healed in a couple of weeks. If you have acne, try using an over-the-counter acne medicine. See your doctor if the problem persists.");
		}
	
	else if(YesOrNo=='N'||YesOrNo=='n')
	{
		printf("\nDo you have red, flaky, oily areas near your scalp, in the folds of your nose, or on your cheeks?\n\n");
		YesOrNo = YesNo();
			
		if(YesOrNo=='y'||YesOrNo=='Y')
		{	
			printf("\nDIAGNOSIS:\nYou may have a skin irritation caused by ACNE, ROSACEA or SEBORRHEA.");
			printf("\nSELF CARE:\nSee your doctor.");
		}
	
	else if(YesOrNo=='N'||YesOrNo=='n')
	{
		printf("\nDo you have painful swelling near one or both ears, and do you have fever along with pain when chewing or swallowing?\n\n");
		YesOrNo = YesNo();
			
		if(YesOrNo=='y'||YesOrNo=='Y')
		{	
			printf("\nDIAGNOSIS:\nYou may have the MUMPS, a contagious viral infection that affects the glands below and in front of the ears.");
			printf("\nSELF CARE:\nThe MMR vaccine prevents mumps. If you think you have mumps, see your doctor. Because this infection is caused by a virus, antibiotics aren’t effective. Get plenty of rest and drink lots of fluids. Take over-the-counter anti-inflammatory medicines to relieve the pain. Cold compresses may also help.");
		}
	
	else if(YesOrNo=='N'||YesOrNo=='n')
	{
		printf("\nDo you have reddish, raised, excessive tissue that seems to be growing around the area of a scar or piercing?\n\n");
		YesOrNo = YesNo();
			
		if(YesOrNo=='y'||YesOrNo=='Y')
		{	
			printf("\nDIAGNOSIS:\nYou may have a KELOID.");
			printf("\nSELF CARE:\nSee your doctor.");
		}
	
	else if(YesOrNo=='N'||YesOrNo=='n')
	{
		printf("\nFor more information, talk to your doctor. If you think the problem is serious, call your doctor right away.\n\n");
	}
}
}
}
}
}
}
void HWAProblems()
{
	system("cls");
	char YesOrNo;
	printf("\n******************************Hand/Wrist/Arm Problems******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Did you hit, twist or fall on your arm, hand or wrist?");
	YesOrNo = YesNo();
	if(YesOrNo=='y'||YesOrNo=='Y')
	{
	printf("Is the affected area deformed or swollen??");
	YesOrNo = YesNo();
		if(YesOrNo=='y'||YesOrNo=='Y')
		{
			printf("\nDIAGNOSIS:\nYou may have a FRACTURED bone.");
			printf("\nSELF CARE:\nURGENT: See your doctor right away. Apply ice packs to the affected area. Use a sling to help hold the arm still and reduce pain. Use an over-the-counter pain medicine such as ibuprofen to relieve pain and reduce swelling.");
		}
		else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have reddish, raised, excessive tissue that seems to be growing around the area of a scar or piercing?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have a KELOID.");
			printf("\nSELF CARE:\nSee your doctor.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDoes the pain get worse when you move your arm, hand or wrist?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nIf there is no fracture, the limb may be SPRAINED.");
			printf("\nSELF CARE:\nAvoid activities that cause pain. Apply ice and don’t move your arm. Use an over-the-counter medicine such as ibuprofen to relieve pain and reduce swelling. See your doctor if the pain gets worse.");
			}
				else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nFor more information, please talk to your doctor. If you think the problem is serious, call your doctor right away.\n\n");
			
		}
		}
		}
	}
		else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDoes the pain get worse with repetitive movement, for example, while you are working or playing a sport?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have TENDINITIS, inflammation of a tendon.");
			printf("\nSELF CARE:\nUse an over-the-counter anti-inflammatory medicine such as ibuprofen to relieve pain and reduce swelling, apply ice packs to the area and rest your arm. See your doctor if there is no improvement or if the area becomes swollen, red or warm. These may be signs of infection.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
			{	
			printf("\nIs it painful to grip a doorknob, and does the pain start on the outside of your elbow and move down your arm to your wrist?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYour may have TENNIS ELBOW, a type of TENDINITIS.");
			printf("\nSELF CARE:\nRest the arm, apply ice packs to the elbow, and use an anti-inflammatory medicine such as ibuprofen. See your doctor if there’s no improvement, you can’t bend your elbow, or if the area becomes swollen, red or warm. These may be signs of infection.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have numbness or pain in your fingers, hand, wrist or arm, especially when you flex your wrist?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have CARPAL TUNNEL SYNDROME, a compression of the median nerve in the wrist and hand.");
			printf("\nSELF CARE:\nUse anti-inflammatory medicine such as ibuprofen to reduce pain and swelling. A wrist splint may also ease pain and numbness. If your symptoms don’t improve, see your doctor.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have a firm lump or swelling near your wrist or finger joints?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have a GANGLION CYST, a common non-cancerous cyst.");
			printf("\nSELF CARE:\nSee your doctor if the cyst causes pain or begins to grow rapidly.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have redness, swelling or pain in the skin around a cut or wound, or is there a red streak anywhere on your arm or hand?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nThese are all signs of INFECTION in the hand, wrist or arm.");
			printf("\nSELF CARE:\nURGENT: See your doctor right away. Use an antibiotic ointment on infected cuts.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nAre one or more joints swollen and tender?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have RHEUMATOID ARTHRITIS, an inflammatory joint condition. You may also have GOUT, or an INFECTION of the joint or bone.");
			printf("\nSELF CARE:\nSee your doctor right away. Use an anti-inflammatory medicine such as ibuprofen to relieve pain and reduce swelling.");
			}
				else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nFor more information, please talk to your doctor. If you think the problem is serious, call your doctor right away.\n\n");
		}
		}	
	}
}
}
}
		}
}
void HipProblems()
{
	system("cls");
	char YesOrNo;
	printf("\n******************************Hip Problems******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Did you fall or suddenly feel your hip give way?");
	YesOrNo = YesNo();
	if(YesOrNo=='y'||YesOrNo=='Y')
	{
	printf("Do the toes on your leg on the side of your injured hip seem to turn out, and does it hurt to straighten, lift or stand on your leg?");
	YesOrNo = YesNo();
		if(YesOrNo=='y'||YesOrNo=='Y')
		{
			printf("\nDIAGNOSIS:\nYour pain and deformity may be from a HIP FRACTURE.");
			printf("\nSELF CARE:\nURGENT: See your doctor right away.");
		}
		else if(YesOrNo=='N'||YesOrNo=='n')
		{
			printf("\nDIAGNOSIS:\nYour pain may be from BRUISED HIPS.");
			printf("\nSELF CARE:\nSee your doctor. Use ice and an anti-inflammatory medicine to relieve the pain");
		}
	}
	else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have stiffness, swelling, redness or pain in any other joints?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYour hip pain may be from ARTHRITIS.");
			printf("\nSELF CARE:\nTry an anti-inflammatory medicine. If you don’t feel better, see your doctor.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nHave you felt a “click” in your hip or occasional pain with activity?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have a CONGENITAL HIP PROBLEM, a deformity of the hip joint that began before birth.");
			printf("\nSELF CARE:\nSee your doctor.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have pain in the back of your hip that starts in your lower back and travels into your buttocks or into your leg?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYour symptoms may be from SCIATICA, a pinched nerve. If the pain shoots down your leg near your knee or to your foot, this could be from a RUPTURED DISK.");
			printf("\nSELF CARE:\nHeat, anti-inflammatory medicine and rest may help. See your doctor if the pain continues or if it travels down the leg. Contact your doctor immediately if you develop difficulty controlling urination or bowel movements.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nIs the person a child with pain in the knees, hips or groin?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nThis could be related to a number of disorders, including a SLIPPED CAPITAL FEMORAL EPIPHYSIS.");
			printf("\nSELF CARE:\nSee your doctor.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nFor more information, please talk with your doctor. If you think the problem is serious, call your doctor right away.\n\n");
		}
		}
		}
		}
		}
}
void LBackProblems()
{
	system("cls");
	char YesOrNo;
	printf("\n******************************Lower Back Pain******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Did your pain begin after a fall or injury or when you lifted an object?");
	YesOrNo = YesNo();
	if(YesOrNo=='y'||YesOrNo=='Y')
	{
	printf("Do you have numbness or pain extending down your leg?");
	YesOrNo = YesNo();
		if(YesOrNo=='y'||YesOrNo=='Y')
		{	
			printf("\nDIAGNOSIS:\nYou may have a HERNIATED DISK.");
			printf("\nSELF CARE:\nSee your doctor. Get plenty of rest and use an anti-inflammatory medicine to relieve pain. If your pain is severe, if you have lost feeling or movement, or if you have lost control of your bladder or bowels, see your doctor or go to the emergency room right away.");
		}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nAre you over 60 years of age or do you have arthritis, and are you having severe pain with any movement?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have a FRACTURED SPINE.");
			printf("\nSELF CARE:\nEMERGENCY: Call an ambulance right away. Do not try to drive to the emergency room, and try to move as little as possible.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have pain when twisting, bending or even sitting?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYour pain may be from MUSCLE SPASM, a PULLED MUSCLE or a HERNIATED DISK.");
			printf("\nSELF CARE:\nApply heat, use an anti-inflammatory medicine and get rest. If you don’t get better or if your symptoms get worse, see your doctor.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have pain that comes and goes that may have started in your teen years?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have SPONDYLOLISTHESIS, when one vertebra in the spine slips over another, or SPONDYLOSIS, a type of arthritis.");
			printf("\nSELF CARE:\nSee your doctor. Use anti-inflammatory medicines to relieve pain.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have a fever?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDo you have blood in your urine and one-sided back pain along with burning during urination?");
			YesOrNo = YesNo();
			}
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have a kidney infection such as PYELONEPHRITIS. You may also have KIDNEY STONES, which can start a kidney infection and may cause pain, blood and painful urination without a fever.");
			printf("\nSELF CARE:\nURGENT: See your doctor right away.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDIAGNOSIS:\nYou may have a viral illness such as the FLU.");
			printf("\nSELF CARE:\nUse analgesics such as acetaminophen to reduce fever and use over-the-counter cold medicines to treat other symptoms. See your doctor if your symptoms don’t improve or if they get worse.");
		}
		}
		}
		}
		}
	}
		else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have pain that comes and goes that may have started in your teen years?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have SPONDYLOLISTHESIS, when one vertebra in the spine slips over another, or SPONDYLOSIS, a type of arthritis.");
			printf("\nSELF CARE:\nSee your doctor. Use anti-inflammatory medicines to relieve pain.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have a fever?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDo you have blood in your urine and one-sided back pain along with burning during urination?");
			YesOrNo = YesNo();
			}
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have a kidney infection such as PYELONEPHRITIS. You may also have KIDNEY STONES, which can start a kidney infection and may cause pain, blood and painful urination without a fever.");
			printf("\nSELF CARE:\nURGENT: See your doctor right away.");
			}
			if(YesOrNo=='n'||YesOrNo=='N')
			{	
			printf("\nDIAGNOSIS:\nYou may have a viral illness such as the FLU.");
			printf("\nSELF CARE:\nUse analgesics such as acetaminophen to reduce fever and use over-the-counter cold medicines to treat other symptoms. See your doctor if your symptoms don’t improve or if they get worse.");
			}
		}
		}
}
void ToothProblems()
{
	system("cls");
	char YesOrNo;
	printf("\n******************************Tooth Problems******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Did you have an injury that knocked out a tooth?");
	YesOrNo = YesNo();
	if(YesOrNo=='y'||YesOrNo=='Y')
	{	
		printf("\nDIAGNOSIS:\nYou have TOOTH LOSS.");
		printf("\nSELF CARE:\nDENTAL EMERGENCY: See your dentist or go to the emergency room right away. Keep the tooth moist. It’s best to keep the tooth in your mouth until you get to the dentist or emergency room. The tooth may be saved.");
	}	
	else if(YesOrNo=='N'||YesOrNo=='n')
	{	
		printf("\nDo you have pain that is specific to one tooth?\n\n");
		YesOrNo = YesNo();
			
		if(YesOrNo=='y'||YesOrNo=='Y')
		{	
		printf("\nHave you broken or chipped a tooth, or is the tooth loose in its socket?\n\n");
		YesOrNo = YesNo();
		}
		if(YesOrNo=='y'||YesOrNo=='Y')
		{	
		printf("\nDIAGNOSIS:\nYour pain may be from a FRACTURED, CRACKED or LOOSE TOOTH.");
		printf("\nSELF CARE:\nSave any pieces of the tooth, wrap them in a cool, moist cloth and see your dentist as soon as possible.");
		}	
		else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you feel pain when you eat cold foods or liquids?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYour pain may be from a CAVITY.");
			printf("\nSELF CARE:\nMake an appointment to see your dentist. Proper brushing and flossing along with fluoride rinses and coatings, as suggested by your dentist, may prevent tooth decay.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have redness or swelling around one or more teeth, in your gums or in your face?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have a dental ABSCESS or an INFECTION in a tooth, gums or other tissues.");
			printf("\nSELF CARE:\nURGENT: See your dentist or doctor right away.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have redness and swelling in large areas of your gums, or is the skin inside your mouth peeling?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYou may have an infection such as TRENCH MOUTH, GINGIVITIS or PERIODONTITIS. A rare drug reaction, STEVENS-JOHNSON REACTION, may also cause this.");
			printf("\nSELF CARE:\nSee your dentist or doctor right away. You may be given antibiotics to stop the infection. Over-the-counter pain relievers, such as acetaminophen, may relieve discomfort. Many of these infections can be prevented with proper dental care, such as brushing and flossing regularly.");
			}
				else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nDo you have headaches, pain near your ear, headaches, or do you hear a cracking sound when you bite?\n\n");
			YesOrNo = YesNo();
			
			if(YesOrNo=='y'||YesOrNo=='Y')
			{	
			printf("\nDIAGNOSIS:\nYour pain may be from TEMPOROMANDIBULAR JOINT (TMJ) syndrome, a condition that affects the jaw.");
			printf("\nSELF CARE:\nTry relaxing your jaw when you are tense or nervous. Stop chewing gum. Try a mild anti-inflammatory medicine, such as ibuprofen. If you don’t get better, see your dentist.");
			}
			else if(YesOrNo=='N'||YesOrNo=='n')
		{	
			printf("\nFor more information, please talk to your doctor or your dentist. If you think the problem is serious, call your doctor or your dentist right away.\n\n");
		}
		}
		}
		}
		}
		
	}
}




void Headache(void){
	system("cls");
	char YesOrNo;
	printf("\n******************************Headaches******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Do you have a fever, cold symptoms, nausea, vomiting, or diarrhea?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have the cold or the flu or gastroenteritis (stomach flu).");
	printf("\nSELF CARE:\nGet plenty of rest and drink plenty of fluids. Use over-the-counter medicine to relieve cold and flu symptoms and for diarrhea.");	


}//yes wala
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a severe headache, stiff neck, vomiting, and does normal light hurt your eyes?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have meningitis, a serious infection of the fluid around your brain and spinal cord, or intracranial hemorrhage, bleeding inside the brain.");
	printf("\nSELF CARE:\nEMERGENCYSee your doctor or go to the emergency room right away.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHave you injured your head or been knocked out recently?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have a concussion, or a subdural hematoma, a serious condition caused by blood pushing on your brain.");
	printf("\nSELF CARE:\nURGENT See your doctor right away.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have numbness, tingling or weakness in the arms and legs, or do you have trouble speaking or understanding speech?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may be having a stroke.");
	printf("\nSELF CARE:\nEMERGENCY See your doctor or go to the emergency room right away.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have pressure around your eyes, or do you have congestion with yellowish-green nasal discharge and a fever?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have a sinus infection.");
	printf("\nSELF CARE:\nTreat fever, headache, and a sore throat with over-the-counter medicines, such as ibuprofen or acetaminophen. An over-the-counter decongestant and saline nasal spray may help relieve other symptoms. See your doctor if the pain becomes severe or your fever persists.");	
}
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have mild to moderate pressure or tightening around your temples and does the pain occur during times of stress or after you have been sitting in one position for a long time?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have a tension headache.");
	printf("\nSELF CARE:\nUse over-the-counter medicine, such as ibuprofen or acetaminophen, to relieve pain. Getting plenty of rest, taking a hot shower and applying ice packs to painful areas may also help.");	
}
		
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have intense throbbing pain, often with nausea or vomiting, and see flashing lights or spots before the headache?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may suffer from migraine headaches.You may have a tension headache.");
	printf("\nSELF CARE:\nSee your doctor. He or she can diagnose your problem and may prescribe prescription medicine for migraines. In the meantime, use over-the-counter medicine, such as ibuprofen or acetaminophen, to relieve pain. You can also rest in a dark room and apply ice packs and gentle pressure to painful areas.");	
}
		
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo your headaches occur after you read, watch TV, or use a computer?");
		YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYour headaches may be due to vision problems.");
	printf("\nSELF CARE:\nSee an optometrist or ophthalmologist for an eye exam to see if you need glasses or contacts to correct your vision.");	
}
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you get headaches and feel shaky and weak if you miss a meal?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYour headaches may be from hypoglycemia, or low blood sugar.");
	printf("\nSELF CARE:\nSee your doctor. You can also try eating six small meals a day rather than three large meals. This may regulate your blood sugar.");	
}

			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre you trying to cut down on caffeine, alcohol, or some other drug?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may be suffering from withdrawal.");
	printf("\nSELF CARE:\nUse over-the-counter medicine, such as ibuprofen or acetaminophen, to relieve pain and discomfort. The symptoms should fade after a few days. Don’t restart your habit.");	
}


		else if(YesOrNo=='N'||YesOrNo=='n'){
	printf("\nSELF CARE:\nFor more information, please talk to your doctor. If you think the problem is serious, call your doctor right away or go to the emergency room.");	
}
	}
	}
	}
		
	}
	}
	}
}
}
	}//no wala
}

void HearingProblems(void){
	system("cls");
	char YesOrNo;
	printf("\n******************************Hearing Problems******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Have you been exposed to loud noises at work, or have you been shooting guns, driving a truck or listening to loud music for long periods of time?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nLoud noises that result from certain types of work or entertainment may damage the inner ear. This kind of hearing loss is called OCCUPATIONAL.");
	printf("\nSELF CARE:\nPrevent occupational hearing loss by wearing protective ear plugs or earmuffs. Once the hearing loss has occurred it can’t be reversed. If you think you have occupational hearing loss, see your doctor.");	
}//yes wala


	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre you experiencing partial hearing loss, along with earache and a feeling of fullness in the ear?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nEarwax blockage, called CERUMINOSIS, can cause hearing loss in one or both ears.");
	printf("\nSELF CARE:\nUse mineral oil, baby oil or an over-the-counter earwax removal kit to soften the wax in your ear. If wax still can’t be removed, see your doctor.");	
}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHas your hearing loss occurred gradually as you have aged?");
		YesOrNo = YesNo();
		
	if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have PRESBYCUSIS, hearing loss related to aging and other factors.");
	printf("\nSELF CARE:\nSee your doctor for an ear exam and a hearing test. You may benefit from a hearing aid.");	
}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre you experiencing gradual hearing loss in one ear only?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have an ACOUSTIC NEUROMA, a noncancerous tumor on the hearing nerve.");
	printf("\nSELF CARE:\nSee your doctor.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have bouts of dizziness, nausea or vomiting, ringing in one ear and hearing loss in the same ear?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have MENIERE’S DISEASE or a more serious TUMOR on the hearing nerve.");
	printf("\nSELF CARE:\nSee your doctor.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre you taking any medicines?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nCertain medicines can cause hearing problems such as ringing in the ears.");
	printf("\nSELF CARE:\nSee your doctor.");	
}
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have pain, reduced hearing, fever, cold symptoms or a “fluid” sensation in your ear?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nThis may be due to a cold, flu, allergies or a more chronic condition, SEROUS OTITIS MEDIA, in which fluid builds up in the middle ear.");
	printf("\nSELF CARE:\nUse cold medicine for 5 to 7 days. If you don’t feel better or if you have a constant fever or severe pain, see your doctor.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nFor more information, please talk to your doctor. If you think the problem is serious, call your doctor right away.");
	

}

}
	}

}
}
}
}//no wala

}


void LegProblems(void){
	system("cls");
	char YesOrNo;
	printf("\n******************************Leg Problems******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Do you have pain in your leg or ankle after a fall or injury?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
		printf("\nIs there a deformity of your leg, or are you unable to stand or put pressure on your leg?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have BROKEN BONE such as the TIBIA or FIBULA in the lower leg.");
	printf("\nSELF CARE:\nEMERGENCY See your doctor or go to the emergency room right away. Apply ice to the affected area.");	
}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDid you hear a popping or grinding sound at the time of the injury?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have a SPRAINED ankle, but it’s possible to break a bone of the lower leg and still be able to stand on it.");
	printf("\nSELF CARE:\nEMERGENCY See your doctor or go to the emergency room right away. Apply ice to the affected area.");	
}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nIs there bruising or swelling of your calf or ankle?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have a partial or complete TEAR of the ACHILLES TENDON that attaches the calf muscle to the heel. This injury will cause pain and difficulty pointing the foot down. A TORN CALF MUSCLE will be painful and might produce bruises.");
	printf("\nSELF CARE:\nYou may have a partial or complete TEAR of the ACHILLES TENDON that attaches the calf muscle to the heel. This injury will cause pain and difficulty pointing the foot down. A TORN CALF MUSCLE will be painful and might produce bruises.");	
}

		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nA MUSCLE PULL or STRAIN will cause pain and stiffness in the calf muscle without any bruising or swelling.");
	printf("\nSELF CARE:\nApply ice and use an anti-inflammatory medicine. Avoid activities that cause pain.");	



}
}
}
	}//yes wala
	
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have pain or mild swelling in the front or inner part of your lower leg that may have started after physical activity such as running or jumping?");
		YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have SHIN SPLINTS, inflammation of the ligaments and other connective tissue along your TIBIA bone, or a STRESS FRACTURE, a tiny crack in the bone. These injuries are often caused by overuse during physical activity.");
	printf("\nSELF CARE:\nGet plenty of rest and avoid activities that cause pain. Use an anti-inflammatory medicine such as ibuprofen and apply ice to the area. See your doctor if pain or swelling gets worse or doesn’t get better.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have pain, swelling, redness or warmth in your calf?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have DEEP VENOUS THROMBOSIS, a clot in the veins of the calf muscles, often caused by prolonged inactivity.");
	printf("\nSELF CARE:\nSee your doctor or go to the emergency room right away. A blood clot in the legs could break away and block an artery in the lungs, causing pulmonary embolism.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have twisted dark blue or purple veins near the surface of the skin of your calf, and do you have pain or cramping in your calf or leg that is worse after standing or sitting for a long time?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have VARICOSE VEINS, swollen veins caused by weak valves and vein walls.");
	printf("\nSELF CARE:\nWear support stockings or hose. Alternate periods of standing with sitting. See your doctor if the varicose veins are very prominent, or if they become painful and red.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a tender red area or a red streak anywhere on your leg?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have an infection such as CELLULITIS (infection of the skin), LYMPHANGITIS (infection of the lymph channels leading to lymph nodes) or OSTEOMYELITIS (infection of the bone).");
	printf("\nSELF CARE:\nApply mild heat and an antibiotic ointment. Call your doctor if you have a fever or if the red areas or pain get worse or do not go away.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a tender red area or a red streak anywhere on your leg?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nThe pain may be caused by CLAUDICATION caused by PERIPHERAL ARTERIAL DISEASE (PAD), narrowing of the arteries that carry blood to your leg muscles.");
	printf("\nSELF CARE:\nSee your doctor as soon as possible.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo your calves ache after walking, and is the pain relieved with rest?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nThe pain may be caused by CLAUDICATION caused by PERIPHERAL ARTERIAL DISEASE (PAD), narrowing of the arteries that carry blood to your leg muscles.");
	printf("\nSELF CARE:\nSee your doctor as soon as possible.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have swelling in both of your feet or lower legs?");
		YesOrNo = YesNo();

		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have EDEMA, a build-up of fluids that may be caused from HEART FAILURE, KIDNEY DISEASE or blockage of blood returning to the heart.");
	printf("\nSELF CARE:\nSee your doctor as soon as possible.");	
}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nFor more information, please talk to your doctor. If you think the problem is serious, call your doctor right away");
	


}

	}
		
		
}
	}
	}
		
		}
}
}//no wala
	
	
}

void NeckPain(void){
	system("cls");
	char YesOrNo;
	printf("\n******************************Neck Pain******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Have you been involved in an accident that involved your neck?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
		printf("\nAre you having pain or numbness down your shoulder, arms or legs?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nThis may be MUSCLE SPASM or a BURNER, but it also may be an injury to the SPINAL CORD.");
	printf("\nSELF CARE:\nURGENT See your doctor or go to the emergency room right away. If your doctor diagnoses your problem as muscle spasm or a burner, use over-the counter medicine, such as acetaminophen or ibuprofen, to relieve pain, and apply heat to the sore area, as recommended by the doctor");	
}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nHas pain come on slowly over a few hours after the accident?");
		YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nMUSCLE ACHES and SPASMS usually develop minutes to hours after an injury.");
	printf("\nSELF CARE:\nUse anti-inflammatory medicines, such as ibuprofen and aspirin, to relieve pain and discomfort, and apply heat to the sore area. See your doctor if your pain gets worse or lasts for several days without getting better.");	
}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a fever, stiff neck, vomiting, and does light hurt your eyes?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYour symptoms may be from a simple viral illness or from MENINGITIS, a more serious infection around the brain.");
	printf("\nSELF CARE:\nSee your doctor or go to the emergency room right away.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have throbbing pain or numbness down your shoulder or into your arm?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nYou may have a HERNIATED CERVICAL DISK, when part of the center portion of the spine presses against a nerve. It may also be from MUSCLE SPASM.");
	printf("\nSELF CARE:\nSee your doctor. Use over-the-counter medicine, such as acetaminophen or ibuprofen, to relieve pain, and apply heat to the sore area. If your symptoms came on suddenly, see your doctor right away.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a stiff neck or are you having trouble moving your neck without pain?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYour pain is probably from MUSCLE SPASM, but also may be from RHEUMATOID ARTHRITIS, an inflammatory joint disease, or FIBROMYALGIA, a chronic condition affecting muscles and tendons");
	printf("\nSELF CARE:\nUse anti-inflammatory medicines, such as ibuprofen or aspirin, and apply heat to the sore area. See your doctor if the pain or stiffness gets worse or doesn’t get better.");	
}
		
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDid you have a whiplash-type injury in the past, or do you have pain and/or stiffness every day in your neck, hands, knees, hips or other joints?");
		YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYour pain may be from DEGENERATIVE CERVICAL ARTHRITIS, a disorder that affects the bones and cartilage in the neck.");
	printf("\nSELF CARE:\nUse anti-inflammatory medicines, such as ibuprofen or aspirin. See your doctor if the pain or stiffness gets worse or doesn’t get better.");	
}

		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nFor more information, please talk to your doctor. If you think the problem is serious, call your doctor right away.");

	}
	}
	}
	}
}
}

	}//yes wala
	
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a fever, stiff neck, vomiting, and does light hurt your eyes?");
		YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYour symptoms may be from a simple viral illness or from MENINGITIS, a more serious infection around the brain.");
	printf("\nSELF CARE:\nEMERGENCY See your doctor or go to the emergency room right away.");	
}
	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have throbbing pain or numbness down your shoulder or into your arm?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have a HERNIATED CERVICAL DISK, when part of the center portion of the spine presses against a nerve. It may also be from MUSCLE SPASM.");
	printf("\nSELF CARE:\nSee your doctor. Use over-the-counter medicine, such as acetaminophen or ibuprofen, to relieve pain, and apply heat to the sore area. If your symptoms came on suddenly, see your doctor right away.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a stiff neck or are you having trouble moving your neck without pain?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYour pain is probably from MUSCLE SPASM, but also may be from RHEUMATOID ARTHRITIS, an inflammatory joint disease, or FIBROMYALGIA, a chronic condition affecting muscles and tendons.");
	printf("\nSELF CARE:\nUse anti-inflammatory medicines, such as ibuprofen or aspirin, and apply heat to the sore area. See your doctor if the pain or stiffness gets worse or doesn’t get better.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDid you have a whiplash-type injury in the past, or do you have pain and/or stiffness every day in your neck, hands, knees, hips or other joints?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYour pain may be from DEGENERATIVE CERVICAL ARTHRITIS, a disorder that affects the bones and cartilage in the neck.");
	printf("\nSELF CARE:\nUse anti-inflammatory medicines, such as ibuprofen or aspirin. See your doctor if the pain or stiffness gets worse or doesn’t get better.");	
}

	else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nFor more information, please talk to your doctor. If you think the problem is serious, call your doctor right away.");
	
}
	}
}
	}
	
}//no wala
	
}

void ThroatProblems(void){
	system("cls");
	char YesOrNo;
	printf("\n******************************Throat Problems******************************\n");
	printf("STEP 2:\nAnswering Questions(Enter Y or N)\n\n");
	
	printf("Do you have a fever?");
	YesOrNo = YesNo();
	
	if(YesOrNo=='y'||YesOrNo=='Y'){
		printf("\nDo you have body aches, headache, cough or runny nose?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou probably have a COLD or FLU.");
	printf("\nSELF CARE:\nDrink plenty of fluids and get plenty of rest. Children should be given nonaspirin medicine for the fever. If the cold lasts longer than two to three days, see your doctor.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nAre you vomiting or do you have nausea or diarrhea?");
		YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have viral GASTROENTERITIS, also called STOMACH FLU.");
	printf("\nSELF CARE:\nDrink plenty of fluids and get plenty of rest. Use an antinausea and/or antidiarrheal medicine. See your doctor if symptoms get worse, if they last longer than a week, or if you become dehydrated.");	
}
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nWhen you look at the back of your throat, do you see white patches on your tonsils?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have STREP THROAT or MONONUCLEOSIS.");
	printf("\nSELF CARE:\nSee your doctor.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have a persistent cough or are you coughing mucus?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThese symptoms may be from BRONCHITIS, PNEUMONIA or POST-NASAL DRIP.");
	printf("\nSELF CARE:\nThese illnesses need prescription treatments. See your doctor.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nIs the person a child with a harsh barking cough?");
		YesOrNo = YesNo();
		
			if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nA dry barking cough often means CROUP or, less commonly, EPIGLOTTITIS.");
	printf("\nSELF CARE:\nMake sure the child is drinking plenty of fluids. Relieve fever and other discomfort with children’s acetaminophen. See your doctor right away if there is shortness of breath. Croup and other respiratory infections may need treatment by your doctor.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have small, open sores on your tongue, inside your lips or on the sides or back of your mouth?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThese sores are called CANKER SORES. They usually occur by themselves or with other viral illnesses.");
	printf("\nSELF CARE:\nMost of these sores will heal in 7 to 14 days. Use an anesthetic spray or an analgesic medicine. If the sores are severe, last longer than expected, or are accompanied by other symptoms, see your doctor.");	
}
			else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nIs the skin in your mouth peeling, and are your tongue and gums swollen and red?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThis may be from TRENCH MOUTH, an infection of the gums, teeth and other tissues. A rare drug reaction, STEVENS-JOHNSON REACTION, may also cause this.");
	printf("\nSELF CARE:\nSee your dentist or doctor. Poor dental hygiene may lead to this disease. Brush your teeth and floss as recommended by your dentist. Use over-the-counter pain medications to relieve discomfort.");	
}

		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have white patches and redness on your tongue or on the sides or back of your mouth?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have ORAL THRUSH, a yeast infection in your mouth.");
	printf("\nSELF CARE:\nThis may be a simple infection, or it may come from another, more serious illness. You may be able to control the infection by eating unsweetened yogurt (with live cultures) or taking acidophilus. This may help restore normal bacteria in your body. See your doctor if it returns or doesn’t go away.");	
}
		
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nFor more information, please talk to your doctor. If you think the problem is serious, call your doctor right away.");
		
	}
}

	}
	}
}
	}
	
	}
		
		
}
}//yes wala

		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have small, open sores on your tongue, inside your lips or on the sides or back of your mouth?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThese sores are called CANKER SORES. They usually occur by themselves or with other viral illnesses.");
	printf("\nSELF CARE:\nMost of these sores will heal in 7 to 14 days. Use an anesthetic spray or an analgesic medicine. If the sores are severe, last longer than expected, or are accompanied by other symptoms, see your doctor.");	
}
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nIs the skin in your mouth peeling, and are your tongue and gums swollen and red?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nThis may be from TRENCH MOUTH, an infection of the gums, teeth and other tissues. A rare drug reaction, STEVENS-JOHNSON REACTION, may also cause this.");
	printf("\nSELF CARE:\nSee your dentist or doctor. Poor dental hygiene may lead to this disease. Brush your teeth and floss as recommended by your dentist. Use over-the-counter pain medications to relieve discomfort.");	
}

		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nDo you have white patches and redness on your tongue or on the sides or back of your mouth?");
		YesOrNo = YesNo();
		
		if(YesOrNo=='y'||YesOrNo=='Y'){
	printf("\nDIAGNOSIS:\nYou may have ORAL THRUSH, a yeast infection in your mouth.");
	printf("\nSELF CARE:\nThis may be a simple infection, or it may come from another, more serious illness. You may be able to control the infection by eating unsweetened yogurt (with live cultures) or taking acidophilus. This may help restore normal bacteria in your body. See your doctor if it returns or doesn’t go away.");	
}
		
		else if(YesOrNo=='N'||YesOrNo=='n'){
		printf("\nFor more information, please talk to your doctor. If you think the problem is serious, call your doctor right away.");
		
	}
}

	}
		
		
}//NO WALA

}
int main(){
	
	int choice;
	char tryagain;
	printf("\n**************************Welcome to Symptom Checker*************************\n");
	printf("\n=============================================================================\n");
	printf("\Our trusted Symptom Checker is written and reviewed by physicians and patient\neducation professionals.");
	printf("Find a possible diagnosis by choosing a symptom and \nanswering a few simple questions.\n");
	printf("\nPress any key to start the diagnosis...");	
	getch();
	
	
		menu();
	choice=input();
	
	


	switch(choice){
	case 1: StomachPain();
	break;	
	case 2: Ankle();
	break;
	case 3: ColdAndFlu();
	break;
	case 4: Cough();
	break;
	case 5: FacialSwelling();
	break;
	case 6: HairLoss();
	break;
	case 7: HWAProblems();
	break;
	case 8: Headache();
	break;
	case 9: HearingProblems();
	break;
	case 10: HipProblems();
	break;
	case 11: LegProblems();
	break;
	case 12: LBackProblems();
	break;
	case 13: NeckPain();
	break;
	case 14: ThroatProblems();
	break;
	case 15: ToothProblems();
	break;
	default: printf("Invalid Input");
		
	

	
}

	return 0;
	
}
